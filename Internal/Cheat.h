#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#pragma once


SDK::FVector inline VectorSubtract(SDK::FVector Vector1, SDK::FVector Vector2)
{
	SDK::FVector Vec;
	Vec.X = Vector1.X - Vector2.X;
	Vec.Y = Vector1.Y - Vector2.Y;
	Vec.Z = Vector1.Z - Vector2.Z;
	return Vec;
}

SDK::FVector inline VectorAdd(SDK::FVector Vector1, SDK::FVector Vector2)
{
	SDK::FVector Vec;
	Vec.X = Vector1.X + Vector2.X;
	Vec.Y = Vector1.Y + Vector2.Y;
	Vec.Z = Vector1.Z + Vector2.Z;
	return Vec;
}


void SetRotation(SDK::ACharacter* Target, SDK::FVector AimLocation, bool is_visible)
{

	SDK::UWorld* Gworld = SDK::UWorld::GetWorld();
	if (!Gworld)
		return;

	SDK::UGameInstance* GameInstance = Gworld->OwningGameInstance;
	if (!GameInstance)
		return;

	SDK::ULocalPlayer* LocalPlayer = GameInstance->LocalPlayers[0];
	if (!LocalPlayer)
		return;

	// Get the Camera
	auto Camera = LocalPlayer->PlayerController->PlayerCameraManager;

	// Get player location and rotation
	SDK::FVector MyLocation = Camera->GetCameraLocation();
	SDK::FRotator MyRotation = Camera->GetCameraRotation();

	// Compute the Aim Rotation
	auto gMath = (SDK::UKismetMathLibrary*)SDK::UKismetMathLibrary::StaticClass();
	SDK::FVector Difference = VectorSubtract(AimLocation, MyLocation);
	float fDistance = gMath->VSize(Difference);

	if (c_menu::u_vars::VisCheck && !is_visible) return; // vis check shit ig

	// Compute and apply the Aim Rotation
	SDK::FRotator AimRotation = gMath->FindLookAtRotation(MyLocation, AimLocation);
	LocalPlayer->PlayerController->ClientSetRotation(AimRotation, false);
}

void dump_bones(SDK::ABP_MasterZombie_C* zombie)
{
	FILE* Log = nullptr;
	errno_t err = fopen_s(&Log, "bones.txt", "w");

	if (err == 0 && Log) {
		auto meshname = zombie->Mesh->SkeletalMesh->Name;
		auto bonetree = zombie->Mesh->SkeletalMesh->Skeleton->BoneTree;
		for (int i = 0; i < bonetree.Num(); i++) {
			auto boneName = zombie->Mesh->GetBoneName(i);

			fprintf(Log, "%s = %d,\n", boneName.GetRawString().c_str(), i);
		}

		fclose(Log);
		Beep(500, 500);
	}
	else {
		printf("Cant Dump Bones\n");
	}
}

class c_cheat {
	static SDK::FVector2D BoneToScreenLocation(SDK::APlayerController* Controller, SDK::ACharacter* Player, int BoneId)
	{
		if (!Controller || !Player || !Player->Mesh)
			return { 0, 0 };

		SDK::USkeletalMeshComponent* Mesh = Player->Mesh;

		SDK::FVector BoneLocation = Mesh->GetSocketLocation(Mesh->GetBoneName(BoneId));
		SDK::FVector2D BoneScreenLocation;

		if (Controller->ProjectWorldLocationToScreen(BoneLocation, &BoneScreenLocation, false))
			return BoneScreenLocation;

		return { 0, 0 };
	}

	static float Distance2D(SDK::FVector2D main, SDK::FVector2D other)
	{
		float dx = main.X - other.X;
		float dy = main.Y - other.Y;
		return std::sqrt(dx * dx + dy * dy);
	}

public:
	static inline SDK::FVector2D Screen = {
			static_cast<float>(GetSystemMetrics(SM_CXSCREEN)),
			static_cast<float>(GetSystemMetrics(SM_CYSCREEN))
	};

	static inline SDK::FVector2D ScreenCenter = {
		Screen.X / 2.f,
		Screen.Y / 2.f
	};

	static void Tick()
	{
		if (c_menu::u_vars::SilentAim || c_menu::u_vars::Aimbot)
			ImGui::GetForegroundDrawList()->AddCircle({ static_cast<float>(ScreenCenter.X), static_cast<float>(ScreenCenter.Y) }, c_menu::u_vars::FovRadius, ImColor(255, 255, 255, 255));
		
		SDK::UWorld* Gworld = SDK::UWorld::GetWorld();
		if (!Gworld)
			return;

		SDK::UGameInstance* GameInstance = Gworld->OwningGameInstance;
		if (!GameInstance)
			return;

		SDK::ULocalPlayer* LocalPlayer = GameInstance->LocalPlayers[0];
		if (!LocalPlayer)
			return;

		SDK::APlayerController* PlayerController = LocalPlayer->PlayerController;
		if (!PlayerController)
			return;

		SDK::APlayerState* SelfPlayerState = PlayerController->PlayerState;
		if (!SelfPlayerState)
			return;

		SDK::APlayerController* SelfPlayerController = LocalPlayer->PlayerController;
		if (!SelfPlayerController)
			return;

		SDK::ABP_PlayerCharacter_C* SelfPlayerCharacter = static_cast<SDK::ABP_PlayerCharacter_C*>(PlayerController->AcknowledgedPawn);
		if (!SelfPlayerCharacter)
			return;

		SDK::AGameStateBase* GameState = Gworld->GameState;
		if (!GameState)
			return;

		SDK::ULevel* PersistentLevel = Gworld->PersistentLevel;
		if (!PersistentLevel)
			return;

		uintptr_t Actors = *(uintptr_t*)((uintptr_t)PersistentLevel + 0x98);
		if (!Actors)
			return;

		int32_t ActorCount = *(int32_t*)((uintptr_t)PersistentLevel + 0xa0);
		if (!ActorCount)
			return;

		float ClosestDistance = FLT_MAX;
		SDK::ACharacter* Target = nullptr;
		SDK::FVector AimLocation;
		ImColor Color{};

		if (c_menu::u_vars::InfStamina)
			SelfPlayerCharacter->StaminaComponent->CurrentStamina = SelfPlayerCharacter->StaminaComponent->MaxStamina;

		if (c_menu::u_vars::GodMode)
		{
			if (SelfPlayerCharacter->MedicalComponent->Health != SelfPlayerCharacter->MedicalComponent->MaxHealth)
			{
				auto neeededhealth = SelfPlayerCharacter->MedicalComponent->MaxHealth - SelfPlayerCharacter->MedicalComponent->Health;
				SelfPlayerCharacter->MedicalComponent->IncreaseHealth(neeededhealth);
			}
		}

		if (c_menu::u_vars::NoDrain)
		{
			SelfPlayerCharacter->HungerThirstComponent->CurrentHunger = SelfPlayerCharacter->HungerThirstComponent->MaxHunger;
			SelfPlayerCharacter->HungerThirstComponent->CurrentThirst = SelfPlayerCharacter->HungerThirstComponent->MaxThirst;
			SelfPlayerCharacter->RadiationComponent->CurrentRadiation = SelfPlayerCharacter->RadiationComponent->MaxRadiation;
			SelfPlayerCharacter->RadiationComponent->InRadArea = false;
			SelfPlayerCharacter->SwimmingComponent->CurrentOxygen = SelfPlayerCharacter->SwimmingComponent->MaxOxygen;
		}

		for (std::int32_t i = 0; i < ActorCount; i++)
		{
			SDK::AActor* Actor = *(SDK::AActor**)(Actors + i * sizeof(uintptr_t));
			if (!Actor)
				continue;

			if (c_menu::u_vars::DebugESP)
			{
				SDK::FVector MyLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
				SDK::FVector TargetLocation = Actor->K2_GetActorLocation();
				SDK::FVector Difference = VectorSubtract(TargetLocation, MyLocation);
				float distance = std::sqrt(Difference.X * Difference.X + Difference.Y * Difference.Y + Difference.Z * Difference.Z) / 100.0f;

				if (distance <= c_menu::u_vars::DebugMaxDistance)
				{
					SDK::FVector2D ScreenLocation;
					if (PlayerController->ProjectWorldLocationToScreen(TargetLocation, &ScreenLocation, false))
					{
						float yOffset = 5.0f;
						const float lineHeight = 15.0f;

						if (c_menu::u_vars::DebugShowName)
						{
							std::string nameStr = Actor->GetFullName();
							const char* nameText = nameStr.c_str();

							ImVec2 textSize = ImGui::CalcTextSize(nameText);
							ImVec2 textPos = ImVec2(
								ScreenLocation.X - textSize.x * 0.5f,
								ScreenLocation.Y + yOffset
							);

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(textPos.x - 2, textPos.y - 2),
								ImVec2(textPos.x + textSize.x + 2, textPos.y + textSize.y + 2),
								ImColor(0, 0, 0, 180)
							);

							ImGui::GetForegroundDrawList()->AddText(
								textPos,
								c_menu::u_vars::DebugNameColor,
								nameText
							);

							yOffset += lineHeight;
						}

						if (c_menu::u_vars::DebugShowDistance)
						{
							char distanceText[32];
							sprintf_s(distanceText, "%.1fm", distance);

							ImVec2 textSize = ImGui::CalcTextSize(distanceText);
							ImVec2 textPos = ImVec2(
								ScreenLocation.X - textSize.x * 0.5f,
								ScreenLocation.Y + yOffset
							);

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(textPos.x - 2, textPos.y - 2),
								ImVec2(textPos.x + textSize.x + 2, textPos.y + textSize.y + 2),
								ImColor(0, 0, 0, 180)
							);

							ImGui::GetForegroundDrawList()->AddText(
								textPos,
								c_menu::u_vars::DebugDistanceColor,
								distanceText
							);
						}
					}
				}
			}

			if (Actor->IsA(SDK::ABP_MasterZombie_C::StaticClass()))
			{
				SDK::ABP_MasterZombie_C* PlayerCharacter = (SDK::ABP_MasterZombie_C*)Actor;
				if (!PlayerCharacter)
					continue;

				if (!PlayerCharacter->DamageComponent) continue;
				auto MaxHealth = PlayerCharacter->DamageComponent->MaxHealth;
				auto Health = PlayerCharacter->DamageComponent->CurrentHealth;

				if (PlayerCharacter->IsDead_)
					continue;

				auto PlayerName = PlayerCharacter->AIName;
				bool EntityVisible = PlayerController->LineOfSightTo(PlayerCharacter, { 0.f,0.f,0.f }, false);

				SDK::FVector2D FootLeft = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::Foot_R);
				SDK::FVector2D FootRight = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::Foot_L);

				SDK::FVector2D FootCenter = {
					(FootLeft.X + FootRight.X) / 2.0f,
					(FootLeft.Y + FootRight.Y) / 2.0f
				};
				
				SDK::FVector2D Head = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::head);

				if (!Head.X || !Head.Y)
					continue;

				float height = Head.Y - FootCenter.Y;
				float width = height / 4.f;

				Color = ImColor(255, 255, 20);

				if (EntityVisible)
					Color = ImColor(255, 20, 20);

				// Calculate distance once
				SDK::FVector MyLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
				SDK::FVector TargetLocation = PlayerCharacter->K2_GetActorLocation();
				SDK::FVector Difference = VectorSubtract(TargetLocation, MyLocation);
				float distance = std::sqrt(Difference.X * Difference.X + Difference.Y * Difference.Y + Difference.Z * Difference.Z) / 100.0f; // Convert to meters

				// Check if within max distance for ESP
				if (distance <= c_menu::u_vars::ZombieMaxDistance)
				{
					if (c_menu::u_vars::ZombieShowName || c_menu::u_vars::ZombieShowHealth || c_menu::u_vars::ZombieShowDistance)
					{
						float yOffset = 5.0f;
						const float lineHeight = 17.0f;
						const float barWidth = 50.0f;
						const float barHeight = 5.0f;

						if (c_menu::u_vars::ZombieShowHealth)
						{
							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(FootCenter.X - barWidth / 2, FootCenter.Y + yOffset),
								ImVec2(FootCenter.X + barWidth / 2, FootCenter.Y + yOffset + barHeight),
								ImColor(255, 0, 0, 180)
							);

							float healthPercentage = Health / MaxHealth;
							healthPercentage = std::clamp(healthPercentage, 0.0f, 1.0f);
							float healthWidth = barWidth * healthPercentage;

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(FootCenter.X - barWidth / 2, FootCenter.Y + yOffset),
								ImVec2(FootCenter.X - barWidth / 2 + healthWidth, FootCenter.Y + yOffset + barHeight),
								ImColor(0, 255, 0, 180)
							);

							yOffset += barHeight + 3.0f;
						}

						if (c_menu::u_vars::ZombieShowName)
						{
							std::string nameStr = PlayerName.ToString();
							const char* nameText = nameStr.c_str();

							if (!nameText || strlen(nameText) == 0)
								nameText = "Unknown";

							ImVec2 textSize = ImGui::CalcTextSize(nameText);
							ImVec2 textPos = ImVec2(
								FootCenter.X - textSize.x * 0.5f,
								FootCenter.Y + yOffset
							);

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(textPos.x - 2, textPos.y - 2),
								ImVec2(textPos.x + textSize.x + 2, textPos.y + textSize.y + 2),
								ImColor(0, 0, 0, 180)
							);

							ImGui::GetForegroundDrawList()->AddText(
								textPos,
								c_menu::u_vars::ZombieNameColor,
								nameText
							);
							
							yOffset += lineHeight;
						}

						if (c_menu::u_vars::ZombieShowDistance)
						{
							char distanceText[32];
							sprintf_s(distanceText, "%.1fm", distance);
							
							ImVec2 textSize = ImGui::CalcTextSize(distanceText);
							ImVec2 textPos = ImVec2(
								FootCenter.X - textSize.x * 0.5f,
								FootCenter.Y + yOffset
							);

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(textPos.x - 2, textPos.y - 2),
								ImVec2(textPos.x + textSize.x + 2, textPos.y + textSize.y + 2),
								ImColor(0, 0, 0, 180)
							);

							ImGui::GetForegroundDrawList()->AddText(
								textPos,
								c_menu::u_vars::ZombieDistanceColor,
								distanceText
							);
						}
					}

					if (c_menu::u_vars::ZombieEspSkeleton)
					{
						SDK::FVector2D BoneScreen, PrevBoneScreen;

						for (const std::pair<int, int>& Connection : skeleton::Connections)
						{
							const auto Bone1 = Connection.first;
							const auto Bone2 = Connection.second;

							const auto BoneLoc1 = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(Bone1));
							const auto BoneLoc2 = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(Bone2));

							if (PlayerController->ProjectWorldLocationToScreen(BoneLoc1, &BoneScreen, false) &&
								PlayerController->ProjectWorldLocationToScreen(BoneLoc2, &PrevBoneScreen, false))
							{
								ImGui::GetForegroundDrawList()->AddLine(
									ImVec2(BoneScreen.X, BoneScreen.Y),
									ImVec2(PrevBoneScreen.X, PrevBoneScreen.Y),
									EntityVisible ? c_menu::u_vars::ZombieSkeletonVisibleColor : c_menu::u_vars::ZombieSkeletonHiddenColor,
									1.0f
								);
							}
						}

						const auto HeadLoc = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(skeleton::head));
						if (PlayerController->ProjectWorldLocationToScreen(HeadLoc, &BoneScreen, false))
						{
							ImGui::GetForegroundDrawList()->AddCircle(
								ImVec2(BoneScreen.X, BoneScreen.Y),
								2.0f,
								ImColor(255, 255, 255),
								12
							);
						}
					}
				}

				if (c_menu::u_vars::Aimbot)
				{
					float Distance = Distance2D(ScreenCenter, Head);
					if (Distance < ClosestDistance && Distance < c_menu::u_vars::FovRadius && distance <= c_menu::u_vars::ZombieMaxDistance)
					{
						static int boneId = skeleton::head;

						switch (c_menu::u_vars::AimBone)
						{
						case 0:
							boneId = skeleton::head;
							break;
						case 1:
							boneId = skeleton::spine_02;
							break;
						case 2:
							boneId = skeleton::Pelvis;
							break;
						default:
							break;
						}

						ClosestDistance = Distance;
						Target = PlayerCharacter;
						AimLocation = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(boneId));

						if (AimLocation.X && AimLocation.Y && AimLocation.Z)
						{
							if (GetAsyncKeyState(VK_XBUTTON1) && 0x1)
								SetRotation(Target, AimLocation, EntityVisible);
						}
					}
				}
			}

			if (Actor->IsA(SDK::ABP_ZombieBoss_C::StaticClass()))
			{
				SDK::ABP_ZombieBoss_C* PlayerCharacter = (SDK::ABP_ZombieBoss_C*)Actor;
				if (!PlayerCharacter)
					continue;

				if (!PlayerCharacter->DamageComponent) continue;
				auto MaxHealth = PlayerCharacter->DamageComponent->MaxHealth;
				auto Health = PlayerCharacter->DamageComponent->CurrentHealth;

				if (PlayerCharacter->IsDead_)
					continue;

				auto PlayerName = PlayerCharacter->AIName;
				bool EntityVisible = PlayerController->LineOfSightTo(PlayerCharacter, { 0.f,0.f,0.f }, false);

				SDK::FVector2D FootLeft = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::Foot_R);
				SDK::FVector2D FootRight = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::Foot_L);

				SDK::FVector2D FootCenter = {
					(FootLeft.X + FootRight.X) / 2.0f,
					(FootLeft.Y + FootRight.Y) / 2.0f
				};

				SDK::FVector2D Head = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::head);

				if (!Head.X || !Head.Y)
					continue;

				float height = Head.Y - FootCenter.Y;
				float width = height / 4.f;

				Color = ImColor(255, 255, 20);

				if (EntityVisible)
					Color = ImColor(255, 20, 20);

				// Calculate distance once
				SDK::FVector MyLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
				SDK::FVector TargetLocation = PlayerCharacter->K2_GetActorLocation();
				SDK::FVector Difference = VectorSubtract(TargetLocation, MyLocation);
				float distance = std::sqrt(Difference.X * Difference.X + Difference.Y * Difference.Y + Difference.Z * Difference.Z) / 100.0f; // Convert to meters

				// Check if within max distance for ESP
				if (distance <= c_menu::u_vars::BossMaxDistance)
				{
					if (c_menu::u_vars::BossShowName || c_menu::u_vars::BossShowHealth || c_menu::u_vars::BossShowDistance)
					{
						float yOffset = 5.0f;
						const float lineHeight = 17.0f;
						const float barWidth = 50.0f;
						const float barHeight = 5.0f;

						if (c_menu::u_vars::BossShowHealth)
						{
							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(FootCenter.X - barWidth / 2, FootCenter.Y + yOffset),
								ImVec2(FootCenter.X + barWidth / 2, FootCenter.Y + yOffset + barHeight),
								ImColor(255, 0, 0, 180)
							);

							float healthPercentage = Health / MaxHealth;
							healthPercentage = std::clamp(healthPercentage, 0.0f, 1.0f);
							float healthWidth = barWidth * healthPercentage;

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(FootCenter.X - barWidth / 2, FootCenter.Y + yOffset),
								ImVec2(FootCenter.X - barWidth / 2 + healthWidth, FootCenter.Y + yOffset + barHeight),
								ImColor(0, 255, 0, 180)
							);

							yOffset += barHeight + 3.0f;
						}

						if (c_menu::u_vars::BossShowName)
						{
							std::string nameStr = PlayerName.ToString();
							const char* nameText = nameStr.c_str();

							if (!nameText || strlen(nameText) == 0)
								nameText = "Unknown";

							ImVec2 textSize = ImGui::CalcTextSize(nameText);
							ImVec2 textPos = ImVec2(
								FootCenter.X - textSize.x * 0.5f,
								FootCenter.Y + yOffset
							);

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(textPos.x - 2, textPos.y - 2),
								ImVec2(textPos.x + textSize.x + 2, textPos.y + textSize.y + 2),
								ImColor(0, 0, 0, 180)
							);

							ImGui::GetForegroundDrawList()->AddText(
								textPos,
								c_menu::u_vars::BossNameColor,
								nameText
							);

							yOffset += lineHeight;
						}

						if (c_menu::u_vars::BossShowDistance)
						{
							char distanceText[32];
							sprintf_s(distanceText, "%.1fm", distance);

							ImVec2 textSize = ImGui::CalcTextSize(distanceText);
							ImVec2 textPos = ImVec2(
								FootCenter.X - textSize.x * 0.5f,
								FootCenter.Y + yOffset
							);

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(textPos.x - 2, textPos.y - 2),
								ImVec2(textPos.x + textSize.x + 2, textPos.y + textSize.y + 2),
								ImColor(0, 0, 0, 180)
							);

							ImGui::GetForegroundDrawList()->AddText(
								textPos,
								c_menu::u_vars::BossDistanceColor,
								distanceText
							);
						}
					}

					if (c_menu::u_vars::BossEspSkeleton)
					{
						SDK::FVector2D BoneScreen, PrevBoneScreen;

						for (const std::pair<int, int>& Connection : skeleton::Connections)
						{
							const auto Bone1 = Connection.first;
							const auto Bone2 = Connection.second;

							const auto BoneLoc1 = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(Bone1));
							const auto BoneLoc2 = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(Bone2));

							if (PlayerController->ProjectWorldLocationToScreen(BoneLoc1, &BoneScreen, false) &&
								PlayerController->ProjectWorldLocationToScreen(BoneLoc2, &PrevBoneScreen, false))
							{
								ImGui::GetForegroundDrawList()->AddLine(
									ImVec2(BoneScreen.X, BoneScreen.Y),
									ImVec2(PrevBoneScreen.X, PrevBoneScreen.Y),
									EntityVisible ? c_menu::u_vars::BossSkeletonVisibleColor : c_menu::u_vars::BossSkeletonHiddenColor,
									1.0f
								);
							}
						}

						const auto HeadLoc = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(skeleton::head));
						if (PlayerController->ProjectWorldLocationToScreen(HeadLoc, &BoneScreen, false))
						{
							ImGui::GetForegroundDrawList()->AddCircle(
								ImVec2(BoneScreen.X, BoneScreen.Y),
								2.0f,
								ImColor(255, 255, 255),
								12
							);
						}
					}
				}

				if (c_menu::u_vars::Aimbot)
				{
					float Distance = Distance2D(ScreenCenter, Head);
					if (Distance < ClosestDistance && Distance < c_menu::u_vars::FovRadius && distance <= c_menu::u_vars::ZombieMaxDistance)
					{
						static int boneId = skeleton::head;

						switch (c_menu::u_vars::AimBone)
						{
						case 0:
							boneId = skeleton::head;
							break;
						case 1:
							boneId = skeleton::spine_02;
							break;
						case 2:
							boneId = skeleton::Pelvis;
							break;
						default:
							break;
						}

						ClosestDistance = Distance;
						Target = PlayerCharacter;
						AimLocation = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(boneId));

						if (AimLocation.X && AimLocation.Y && AimLocation.Z)
						{
							if (GetAsyncKeyState(VK_XBUTTON1) && 0x1)
								SetRotation(Target, AimLocation, EntityVisible);
						}
					}
				}
			}

			if (Actor->IsA(SDK::ABP_Military_Boss_C::StaticClass()))
			{
				SDK::ABP_Military_Boss_C* PlayerCharacter = (SDK::ABP_Military_Boss_C*)Actor;
				if (!PlayerCharacter)
					continue;

				if (!PlayerCharacter->BP_AIComponent) continue;
				auto MaxHealth = PlayerCharacter->BP_AIComponent->MaxHealth;
				auto Health = PlayerCharacter->BP_AIComponent->Health;

				if (PlayerCharacter->BP_AIComponent->Dead)
					continue;

				auto PlayerName = PlayerCharacter->BP_AIComponent->GetName();
				bool EntityVisible = PlayerController->LineOfSightTo(PlayerCharacter, { 0.f,0.f,0.f }, false);

				SDK::FVector2D FootLeft = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::Foot_R);
				SDK::FVector2D FootRight = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::Foot_L);

				SDK::FVector2D FootCenter = {
					(FootLeft.X + FootRight.X) / 2.0f,
					(FootLeft.Y + FootRight.Y) / 2.0f
				};

				SDK::FVector2D Head = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::head);

				if (!Head.X || !Head.Y)
					continue;

				float height = Head.Y - FootCenter.Y;
				float width = height / 4.f;

				Color = ImColor(255, 255, 20);

				if (EntityVisible)
					Color = ImColor(255, 20, 20);

				// Calculate distance once
				SDK::FVector MyLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
				SDK::FVector TargetLocation = PlayerCharacter->K2_GetActorLocation();
				SDK::FVector Difference = VectorSubtract(TargetLocation, MyLocation);
				float distance = std::sqrt(Difference.X * Difference.X + Difference.Y * Difference.Y + Difference.Z * Difference.Z) / 100.0f; // Convert to meters

				// Check if within max distance for ESP
				if (distance <= c_menu::u_vars::BossMaxDistance)
				{
					if (c_menu::u_vars::BossShowName || c_menu::u_vars::BossShowHealth || c_menu::u_vars::BossShowDistance)
					{
						float yOffset = 5.0f;
						const float lineHeight = 17.0f;
						const float barWidth = 50.0f;
						const float barHeight = 5.0f;

						if (c_menu::u_vars::BossShowHealth)
						{
							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(FootCenter.X - barWidth / 2, FootCenter.Y + yOffset),
								ImVec2(FootCenter.X + barWidth / 2, FootCenter.Y + yOffset + barHeight),
								ImColor(255, 0, 0, 180)
							);

							float healthPercentage = Health / MaxHealth;
							healthPercentage = std::clamp(healthPercentage, 0.0f, 1.0f);
							float healthWidth = barWidth * healthPercentage;

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(FootCenter.X - barWidth / 2, FootCenter.Y + yOffset),
								ImVec2(FootCenter.X - barWidth / 2 + healthWidth, FootCenter.Y + yOffset + barHeight),
								ImColor(0, 255, 0, 180)
							);

							yOffset += barHeight + 3.0f;
						}

						if (c_menu::u_vars::BossShowName)
						{
							std::string nameStr = PlayerName.c_str();
							const char* nameText = nameStr.c_str();

							if (!nameText || strlen(nameText) == 0)
								nameText = "Unknown";

							ImVec2 textSize = ImGui::CalcTextSize(nameText);
							ImVec2 textPos = ImVec2(
								FootCenter.X - textSize.x * 0.5f,
								FootCenter.Y + yOffset
							);

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(textPos.x - 2, textPos.y - 2),
								ImVec2(textPos.x + textSize.x + 2, textPos.y + textSize.y + 2),
								ImColor(0, 0, 0, 180)
							);

							ImGui::GetForegroundDrawList()->AddText(
								textPos,
								c_menu::u_vars::BossNameColor,
								nameText
							);

							yOffset += lineHeight;
						}

						if (c_menu::u_vars::BossShowDistance)
						{
							char distanceText[32];
							sprintf_s(distanceText, "%.1fm", distance);

							ImVec2 textSize = ImGui::CalcTextSize(distanceText);
							ImVec2 textPos = ImVec2(
								FootCenter.X - textSize.x * 0.5f,
								FootCenter.Y + yOffset
							);

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(textPos.x - 2, textPos.y - 2),
								ImVec2(textPos.x + textSize.x + 2, textPos.y + textSize.y + 2),
								ImColor(0, 0, 0, 180)
							);

							ImGui::GetForegroundDrawList()->AddText(
								textPos,
								c_menu::u_vars::BossDistanceColor,
								distanceText
							);
						}
					}

					if (c_menu::u_vars::BossEspSkeleton)
					{
						SDK::FVector2D BoneScreen, PrevBoneScreen;

						for (const std::pair<int, int>& Connection : skeleton::Connections)
						{
							const auto Bone1 = Connection.first;
							const auto Bone2 = Connection.second;

							const auto BoneLoc1 = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(Bone1));
							const auto BoneLoc2 = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(Bone2));

							if (PlayerController->ProjectWorldLocationToScreen(BoneLoc1, &BoneScreen, false) &&
								PlayerController->ProjectWorldLocationToScreen(BoneLoc2, &PrevBoneScreen, false))
							{
								ImGui::GetForegroundDrawList()->AddLine(
									ImVec2(BoneScreen.X, BoneScreen.Y),
									ImVec2(PrevBoneScreen.X, PrevBoneScreen.Y),
									EntityVisible ? c_menu::u_vars::BossSkeletonVisibleColor : c_menu::u_vars::BossSkeletonHiddenColor,
									1.0f
								);
							}
						}

						const auto HeadLoc = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(skeleton::head));
						if (PlayerController->ProjectWorldLocationToScreen(HeadLoc, &BoneScreen, false))
						{
							ImGui::GetForegroundDrawList()->AddCircle(
								ImVec2(BoneScreen.X, BoneScreen.Y),
								2.0f,
								ImColor(255, 255, 255),
								12
							);
						}
					}
				}

				if (c_menu::u_vars::Aimbot)
				{
					float Distance = Distance2D(ScreenCenter, Head);
					if (Distance < ClosestDistance && Distance < c_menu::u_vars::FovRadius && distance <= c_menu::u_vars::ZombieMaxDistance)
					{
						static int boneId = skeleton::head;

						switch (c_menu::u_vars::AimBone)
						{
						case 0:
							boneId = skeleton::head;
							break;
						case 1:
							boneId = skeleton::spine_02;
							break;
						case 2:
							boneId = skeleton::Pelvis;
							break;
						default:
							break;
						}

						ClosestDistance = Distance;
						Target = PlayerCharacter;
						AimLocation = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(boneId));

						if (AimLocation.X && AimLocation.Y && AimLocation.Z)
						{
							if (GetAsyncKeyState(VK_XBUTTON1) && 0x1)
								SetRotation(Target, AimLocation, EntityVisible);
						}
					}
				}
			}

			if (Actor->IsA(SDK::ABP_PlayerCharacter_C::StaticClass()))
			{
				SDK::ABP_PlayerCharacter_C* PlayerCharacter = (SDK::ABP_PlayerCharacter_C*)Actor;
				if (!PlayerCharacter)
					continue;

				if (!PlayerCharacter->Controller || PlayerCharacter->Controller->IsLocalController())
					continue;

				if (!PlayerCharacter->MedicalComponent) continue;
				auto MaxHealth = PlayerCharacter->MedicalComponent->MaxHealth;
				auto Health = PlayerCharacter->MedicalComponent->Health;

				if (PlayerCharacter->PlayerDead_)
					continue;

				if (!PlayerCharacter->PlayerState || !PlayerCharacter->PlayerState->GetPlayerName().IsValid()) continue;
				auto PlayerName = PlayerCharacter->PlayerState->GetPlayerName();
				bool EntityVisible = PlayerController->LineOfSightTo(PlayerCharacter, { 0.f,0.f,0.f }, false);

				SDK::FVector2D FootLeft = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::Foot_R);
				SDK::FVector2D FootRight = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::Foot_L);

				SDK::FVector2D FootCenter = {
					(FootLeft.X + FootRight.X) / 2.0f,
					(FootLeft.Y + FootRight.Y) / 2.0f
				};

				SDK::FVector2D Head = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::head);

				if (!Head.X || !Head.Y)
					continue;

				float height = Head.Y - FootCenter.Y;
				float width = height / 4.f;

				Color = ImColor(255, 255, 20);

				if (EntityVisible)
					Color = ImColor(255, 20, 20);

				// Calculate distance once
				SDK::FVector MyLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
				SDK::FVector TargetLocation = PlayerCharacter->K2_GetActorLocation();
				SDK::FVector Difference = VectorSubtract(TargetLocation, MyLocation);
				float distance = std::sqrt(Difference.X * Difference.X + Difference.Y * Difference.Y + Difference.Z * Difference.Z) / 100.0f; // Convert to meters

				// Check if within max distance for ESP
				if (distance <= c_menu::u_vars::PlayerMaxDistance)
				{
					if (c_menu::u_vars::PlayerShowName || c_menu::u_vars::PlayerShowHealth || c_menu::u_vars::PlayerShowDistance)
					{
						float yOffset = 5.0f;
						const float lineHeight = 17.0f;
						const float barWidth = 50.0f;
						const float barHeight = 5.0f;

						if (c_menu::u_vars::PlayerShowHealth)
						{
							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(FootCenter.X - barWidth / 2, FootCenter.Y + yOffset),
								ImVec2(FootCenter.X + barWidth / 2, FootCenter.Y + yOffset + barHeight),
								ImColor(255, 0, 0, 180)
							);

							float healthPercentage = Health / MaxHealth;
							healthPercentage = std::clamp(healthPercentage, 0.0f, 1.0f);
							float healthWidth = barWidth * healthPercentage;

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(FootCenter.X - barWidth / 2, FootCenter.Y + yOffset),
								ImVec2(FootCenter.X - barWidth / 2 + healthWidth, FootCenter.Y + yOffset + barHeight),
								ImColor(0, 255, 0, 180)
							);

							yOffset += barHeight + 3.0f;
						}

						if (c_menu::u_vars::PlayerShowName)
						{
							std::string nameStr = PlayerName.ToString().c_str();
							const char* nameText = nameStr.c_str();

							if (!nameText || strlen(nameText) == 0)
								nameText = "Unknown";

							ImVec2 textSize = ImGui::CalcTextSize(nameText);
							ImVec2 textPos = ImVec2(
								FootCenter.X - textSize.x * 0.5f,
								FootCenter.Y + yOffset
							);

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(textPos.x - 2, textPos.y - 2),
								ImVec2(textPos.x + textSize.x + 2, textPos.y + textSize.y + 2),
								ImColor(0, 0, 0, 180)
							);

							ImGui::GetForegroundDrawList()->AddText(
								textPos,
								c_menu::u_vars::PlayerNameColor,
								nameText
							);
							
							yOffset += lineHeight;
						}

						if (c_menu::u_vars::PlayerShowDistance)
						{
							char distanceText[32];
							sprintf_s(distanceText, "%.1fm", distance);
							
							ImVec2 textSize = ImGui::CalcTextSize(distanceText);
							ImVec2 textPos = ImVec2(
								FootCenter.X - textSize.x * 0.5f,
								FootCenter.Y + yOffset
							);

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(textPos.x - 2, textPos.y - 2),
								ImVec2(textPos.x + textSize.x + 2, textPos.y + textSize.y + 2),
								ImColor(0, 0, 0, 180)
							);

							ImGui::GetForegroundDrawList()->AddText(
								textPos,
								c_menu::u_vars::PlayerDistanceColor,
								distanceText
							);
						}
					}

					if (c_menu::u_vars::PlayerEspSkeleton)
					{
						SDK::FVector2D BoneScreen, PrevBoneScreen;

						for (const std::pair<int, int>& Connection : skeleton::Connections)
						{
							const auto Bone1 = Connection.first;
							const auto Bone2 = Connection.second;

							const auto BoneLoc1 = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(Bone1));
							const auto BoneLoc2 = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(Bone2));

							if (PlayerController->ProjectWorldLocationToScreen(BoneLoc1, &BoneScreen, false) &&
								PlayerController->ProjectWorldLocationToScreen(BoneLoc2, &PrevBoneScreen, false))
							{
								ImGui::GetForegroundDrawList()->AddLine(
									ImVec2(BoneScreen.X, BoneScreen.Y),
									ImVec2(PrevBoneScreen.X, PrevBoneScreen.Y),
									EntityVisible ? c_menu::u_vars::PlayerSkeletonVisibleColor : c_menu::u_vars::PlayerSkeletonHiddenColor,
									1.0f
								);
							}
						}

						const auto HeadLoc = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(skeleton::head));
						if (PlayerController->ProjectWorldLocationToScreen(HeadLoc, &BoneScreen, false))
						{
							ImGui::GetForegroundDrawList()->AddCircle(
								ImVec2(BoneScreen.X, BoneScreen.Y),
								2.0f,
								ImColor(255, 255, 255),
								12
							);
						}
					}
				}

				if (c_menu::u_vars::Aimbot)
				{
					float Distance = Distance2D(ScreenCenter, Head);
					if (Distance < ClosestDistance && Distance < c_menu::u_vars::FovRadius && distance <= c_menu::u_vars::PlayerMaxDistance)
					{
						static int boneId = skeleton::head;

						switch (c_menu::u_vars::AimBone)
						{
						case 0:
							boneId = skeleton::head;
							break;
						case 1:
							boneId = skeleton::spine_02;
							break;
						case 2:
							boneId = skeleton::Pelvis;
							break;
						default:
							break;
						}

						ClosestDistance = Distance;
						Target = PlayerCharacter;
						AimLocation = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(boneId));

						if (AimLocation.X && AimLocation.Y && AimLocation.Z)
						{
							if (GetAsyncKeyState(VK_XBUTTON1) && 0x1)
								SetRotation(Target, AimLocation, EntityVisible);
						}
					}
				}
			}

			if (Actor->IsA(SDK::ABP_MasterMilitary_C::StaticClass()))
			{
				SDK::ABP_MasterMilitary_C* PlayerCharacter = (SDK::ABP_MasterMilitary_C*)Actor;
				if (!PlayerCharacter)
					continue;

				if (!PlayerCharacter->BP_AIComponent) continue;
				auto MaxHealth = PlayerCharacter->BP_AIComponent->MaxHealth;
				auto Health = PlayerCharacter->BP_AIComponent->Health;

				if (PlayerCharacter->BP_AIComponent->Dead)
					continue;

				auto PlayerName = PlayerCharacter->BP_AIComponent->AI_Character->GetName();
				bool EntityVisible = PlayerController->LineOfSightTo(PlayerCharacter, { 0.f,0.f,0.f }, false);

				SDK::FVector2D FootLeft = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::Foot_R);
				SDK::FVector2D FootRight = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::Foot_L);

				SDK::FVector2D FootCenter = {
					(FootLeft.X + FootRight.X) / 2.0f,
					(FootLeft.Y + FootRight.Y) / 2.0f
				};

				SDK::FVector2D Head = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::head);

				if (!Head.X || !Head.Y)
					continue;

				float height = Head.Y - FootCenter.Y;
				float width = height / 4.f;

				Color = ImColor(255, 255, 20);

				if (EntityVisible)
					Color = ImColor(255, 20, 20);

				// Calculate distance once
				SDK::FVector MyLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
				SDK::FVector TargetLocation = PlayerCharacter->K2_GetActorLocation();
				SDK::FVector Difference = VectorSubtract(TargetLocation, MyLocation);
				float distance = std::sqrt(Difference.X * Difference.X + Difference.Y * Difference.Y + Difference.Z * Difference.Z) / 100.0f; // Convert to meters

				// Check if within max distance for ESP
				if (distance <= c_menu::u_vars::AIMaxDistance)
				{
					if (c_menu::u_vars::AIShowName || c_menu::u_vars::AIShowHealth || c_menu::u_vars::AIShowDistance)
					{
						float yOffset = 5.0f;
						const float lineHeight = 17.0f;
						const float barWidth = 50.0f;
						const float barHeight = 5.0f;

						if (c_menu::u_vars::AIShowHealth)
						{
							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(FootCenter.X - barWidth / 2, FootCenter.Y + yOffset),
								ImVec2(FootCenter.X + barWidth / 2, FootCenter.Y + yOffset + barHeight),
								ImColor(255, 0, 0, 180)
							);

							float healthPercentage = Health / MaxHealth;
							healthPercentage = std::clamp(healthPercentage, 0.0f, 1.0f);
							float healthWidth = barWidth * healthPercentage;

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(FootCenter.X - barWidth / 2, FootCenter.Y + yOffset),
								ImVec2(FootCenter.X - barWidth / 2 + healthWidth, FootCenter.Y + yOffset + barHeight),
								ImColor(0, 255, 0, 180)
							);

							yOffset += barHeight + 3.0f;
						}

						if (c_menu::u_vars::AIShowName)
						{
							std::string nameStr = PlayerName.c_str();
							const char* nameText = nameStr.c_str();

							if (!nameText || strlen(nameText) == 0)
								nameText = "Unknown";

							ImVec2 textSize = ImGui::CalcTextSize(nameText);
							ImVec2 textPos = ImVec2(
								FootCenter.X - textSize.x * 0.5f,
								FootCenter.Y + yOffset
							);

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(textPos.x - 2, textPos.y - 2),
								ImVec2(textPos.x + textSize.x + 2, textPos.y + textSize.y + 2),
								ImColor(0, 0, 0, 180)
							);

							ImGui::GetForegroundDrawList()->AddText(
								textPos,
								c_menu::u_vars::AINameColor,
								nameText
							);

							yOffset += lineHeight;
						}

						if (c_menu::u_vars::AIShowDistance)
						{
							char distanceText[32];
							sprintf_s(distanceText, "%.1fm", distance);

							ImVec2 textSize = ImGui::CalcTextSize(distanceText);
							ImVec2 textPos = ImVec2(
								FootCenter.X - textSize.x * 0.5f,
								FootCenter.Y + yOffset
							);

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(textPos.x - 2, textPos.y - 2),
								ImVec2(textPos.x + textSize.x + 2, textPos.y + textSize.y + 2),
								ImColor(0, 0, 0, 180)
							);

							ImGui::GetForegroundDrawList()->AddText(
								textPos,
								c_menu::u_vars::AIDistanceColor,
								distanceText
							);
						}
					}

					if (c_menu::u_vars::AIEspSkeleton)
					{
						SDK::FVector2D BoneScreen, PrevBoneScreen;

						for (const std::pair<int, int>& Connection : skeleton::Connections)
						{
							const auto Bone1 = Connection.first;
							const auto Bone2 = Connection.second;

							const auto BoneLoc1 = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(Bone1));
							const auto BoneLoc2 = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(Bone2));

							if (PlayerController->ProjectWorldLocationToScreen(BoneLoc1, &BoneScreen, false) &&
								PlayerController->ProjectWorldLocationToScreen(BoneLoc2, &PrevBoneScreen, false))
							{
								ImGui::GetForegroundDrawList()->AddLine(
									ImVec2(BoneScreen.X, BoneScreen.Y),
									ImVec2(PrevBoneScreen.X, PrevBoneScreen.Y),
									EntityVisible ? c_menu::u_vars::AISkeletonVisibleColor : c_menu::u_vars::AISkeletonHiddenColor,
									1.0f
								);
							}
						}

						const auto HeadLoc = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(skeleton::head));
						if (PlayerController->ProjectWorldLocationToScreen(HeadLoc, &BoneScreen, false))
						{
							ImGui::GetForegroundDrawList()->AddCircle(
								ImVec2(BoneScreen.X, BoneScreen.Y),
								2.0f,
								ImColor(255, 255, 255),
								12
							);
						}
					}
				}

				if (c_menu::u_vars::Aimbot)
				{
					float Distance = Distance2D(ScreenCenter, Head);
					if (Distance < ClosestDistance && Distance < c_menu::u_vars::FovRadius && distance <= c_menu::u_vars::AIMaxDistance)
					{
						static int boneId = skeleton::head;

						switch (c_menu::u_vars::AimBone)
						{
						case 0:
							boneId = skeleton::head;
							break;
						case 1:
							boneId = skeleton::spine_02;
							break;
						case 2:
							boneId = skeleton::Pelvis;
							break;
						default:
							break;
						}

						ClosestDistance = Distance;
						Target = PlayerCharacter;
						AimLocation = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(boneId));

						if (AimLocation.X && AimLocation.Y && AimLocation.Z)
						{
							if (GetAsyncKeyState(VK_XBUTTON1) && 0x1)
								SetRotation(Target, AimLocation, EntityVisible);
						}
					}
				}
			}

			if (Actor->IsA(SDK::ABP_MasterBandit_C::StaticClass()))
			{
				SDK::ABP_MasterBandit_C* PlayerCharacter = (SDK::ABP_MasterBandit_C*)Actor;
				if (!PlayerCharacter)
					continue;

				if (!PlayerCharacter->BP_AIComponent) continue;
				auto MaxHealth = PlayerCharacter->BP_AIComponent->MaxHealth;
				auto Health = PlayerCharacter->BP_AIComponent->Health;

				if (PlayerCharacter->BP_AIComponent->Dead)
					continue;

				bool EntityVisible = PlayerController->LineOfSightTo(PlayerCharacter, { 0.f,0.f,0.f }, false);

				SDK::FVector2D FootLeft = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::Foot_R);
				SDK::FVector2D FootRight = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::Foot_L);

				SDK::FVector2D FootCenter = {
					(FootLeft.X + FootRight.X) / 2.0f,
					(FootLeft.Y + FootRight.Y) / 2.0f
				};

				SDK::FVector2D Head = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::head);

				if (!Head.X || !Head.Y)
					continue;

				float height = Head.Y - FootCenter.Y;
				float width = height / 4.f;

				Color = ImColor(255, 255, 20);

				if (EntityVisible)
					Color = ImColor(255, 20, 20);

				// Calculate distance once
				SDK::FVector MyLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
				SDK::FVector TargetLocation = PlayerCharacter->K2_GetActorLocation();
				SDK::FVector Difference = VectorSubtract(TargetLocation, MyLocation);
				float distance = std::sqrt(Difference.X * Difference.X + Difference.Y * Difference.Y + Difference.Z * Difference.Z) / 100.0f; // Convert to meters

				// Check if within max distance for ESP
				if (distance <= c_menu::u_vars::AIMaxDistance)
				{
					if (c_menu::u_vars::AIShowName || c_menu::u_vars::AIShowHealth || c_menu::u_vars::AIShowDistance)
					{
						float yOffset = 5.0f;
						const float lineHeight = 17.0f;
						const float barWidth = 50.0f;
						const float barHeight = 5.0f;

						if (c_menu::u_vars::AIShowHealth)
						{
							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(FootCenter.X - barWidth / 2, FootCenter.Y + yOffset),
								ImVec2(FootCenter.X + barWidth / 2, FootCenter.Y + yOffset + barHeight),
								ImColor(255, 0, 0, 180)
							);

							float healthPercentage = Health / MaxHealth;
							healthPercentage = std::clamp(healthPercentage, 0.0f, 1.0f);
							float healthWidth = barWidth * healthPercentage;

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(FootCenter.X - barWidth / 2, FootCenter.Y + yOffset),
								ImVec2(FootCenter.X - barWidth / 2 + healthWidth, FootCenter.Y + yOffset + barHeight),
								ImColor(0, 255, 0, 180)
							);

							yOffset += barHeight + 3.0f;
						}

						if (c_menu::u_vars::AIShowName)
						{
							std::string nameStr = "Bandit";
							const char* nameText = nameStr.c_str();

							if (!nameText || strlen(nameText) == 0)
								nameText = "Unknown";

							ImVec2 textSize = ImGui::CalcTextSize(nameText);
							ImVec2 textPos = ImVec2(
								FootCenter.X - textSize.x * 0.5f,
								FootCenter.Y + yOffset
							);

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(textPos.x - 2, textPos.y - 2),
								ImVec2(textPos.x + textSize.x + 2, textPos.y + textSize.y + 2),
								ImColor(0, 0, 0, 180)
							);

							ImGui::GetForegroundDrawList()->AddText(
								textPos,
								c_menu::u_vars::AINameColor,
								nameText
							);

							yOffset += lineHeight;
						}

						if (c_menu::u_vars::AIShowDistance)
						{
							char distanceText[32];
							sprintf_s(distanceText, "%.1fm", distance);

							ImVec2 textSize = ImGui::CalcTextSize(distanceText);
							ImVec2 textPos = ImVec2(
								FootCenter.X - textSize.x * 0.5f,
								FootCenter.Y + yOffset
							);

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(textPos.x - 2, textPos.y - 2),
								ImVec2(textPos.x + textSize.x + 2, textPos.y + textSize.y + 2),
								ImColor(0, 0, 0, 180)
							);

							ImGui::GetForegroundDrawList()->AddText(
								textPos,
								c_menu::u_vars::AIDistanceColor,
								distanceText
							);
						}
					}

					if (c_menu::u_vars::AIEspSkeleton)
					{
						SDK::FVector2D BoneScreen, PrevBoneScreen;

						for (const std::pair<int, int>& Connection : skeleton::Connections)
						{
							const auto Bone1 = Connection.first;
							const auto Bone2 = Connection.second;

							const auto BoneLoc1 = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(Bone1));
							const auto BoneLoc2 = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(Bone2));

							if (PlayerController->ProjectWorldLocationToScreen(BoneLoc1, &BoneScreen, false) &&
								PlayerController->ProjectWorldLocationToScreen(BoneLoc2, &PrevBoneScreen, false))
							{
								ImGui::GetForegroundDrawList()->AddLine(
									ImVec2(BoneScreen.X, BoneScreen.Y),
									ImVec2(PrevBoneScreen.X, PrevBoneScreen.Y),
									EntityVisible ? c_menu::u_vars::AISkeletonVisibleColor : c_menu::u_vars::AISkeletonHiddenColor,
									1.0f
								);
							}
						}

						const auto HeadLoc = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(skeleton::head));
						if (PlayerController->ProjectWorldLocationToScreen(HeadLoc, &BoneScreen, false))
						{
							ImGui::GetForegroundDrawList()->AddCircle(
								ImVec2(BoneScreen.X, BoneScreen.Y),
								2.0f,
								ImColor(255, 255, 255),
								12
							);
						}
					}
				}

				if (c_menu::u_vars::Aimbot)
				{
					float Distance = Distance2D(ScreenCenter, Head);
					if (Distance < ClosestDistance && Distance < c_menu::u_vars::FovRadius && distance <= c_menu::u_vars::AIMaxDistance)
					{
						static int boneId = skeleton::head;

						switch (c_menu::u_vars::AimBone)
						{
						case 0:
							boneId = skeleton::head;
							break;
						case 1:
							boneId = skeleton::spine_02;
							break;
						case 2:
							boneId = skeleton::Pelvis;
							break;
						default:
							break;
						}

						ClosestDistance = Distance;
						Target = PlayerCharacter;
						AimLocation = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(boneId));

						if (AimLocation.X && AimLocation.Y && AimLocation.Z)
						{
							if (GetAsyncKeyState(VK_XBUTTON1) && 0x1)
								SetRotation(Target, AimLocation, EntityVisible);
						}
					}
				}
			}

			if (Actor->IsA(SDK::ABP_MasterTrader_C::StaticClass()))
			{
				SDK::ABP_MasterTrader_C* PlayerCharacter = (SDK::ABP_MasterTrader_C*)Actor;
				if (!PlayerCharacter)
					continue;

				if (!PlayerCharacter->BP_AIComponent) continue;
				auto MaxHealth = PlayerCharacter->BP_AIComponent->MaxHealth;
				auto Health = PlayerCharacter->BP_AIComponent->Health;

				if (PlayerCharacter->BP_AIComponent->Dead)
					continue;

				auto PlayerName = PlayerCharacter->BP_AIComponent->AI_Character->GetName();
				bool EntityVisible = PlayerController->LineOfSightTo(PlayerCharacter, { 0.f,0.f,0.f }, false);

				SDK::FVector2D FootLeft = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::Foot_R);
				SDK::FVector2D FootRight = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::Foot_L);

				SDK::FVector2D FootCenter = {
					(FootLeft.X + FootRight.X) / 2.0f,
					(FootLeft.Y + FootRight.Y) / 2.0f
				};

				SDK::FVector2D Head = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::head);

				if (!Head.X || !Head.Y)
					continue;

				float height = Head.Y - FootCenter.Y;
				float width = height / 4.f;

				Color = ImColor(255, 255, 20);

				if (EntityVisible)
					Color = ImColor(255, 20, 20);

				// Calculate distance once
				SDK::FVector MyLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
				SDK::FVector TargetLocation = PlayerCharacter->K2_GetActorLocation();
				SDK::FVector Difference = VectorSubtract(TargetLocation, MyLocation);
				float distance = std::sqrt(Difference.X * Difference.X + Difference.Y * Difference.Y + Difference.Z * Difference.Z) / 100.0f; // Convert to meters

				// Check if within max distance for ESP
				if (distance <= c_menu::u_vars::AIMaxDistance)
				{
					if (c_menu::u_vars::AIShowName || c_menu::u_vars::AIShowHealth || c_menu::u_vars::AIShowDistance)
					{
						float yOffset = 5.0f;
						const float lineHeight = 17.0f;
						const float barWidth = 50.0f;
						const float barHeight = 5.0f;

						if (c_menu::u_vars::AIShowHealth)
						{
							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(FootCenter.X - barWidth / 2, FootCenter.Y + yOffset),
								ImVec2(FootCenter.X + barWidth / 2, FootCenter.Y + yOffset + barHeight),
								ImColor(255, 0, 0, 180)
							);

							float healthPercentage = Health / MaxHealth;
							healthPercentage = std::clamp(healthPercentage, 0.0f, 1.0f);
							float healthWidth = barWidth * healthPercentage;

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(FootCenter.X - barWidth / 2, FootCenter.Y + yOffset),
								ImVec2(FootCenter.X - barWidth / 2 + healthWidth, FootCenter.Y + yOffset + barHeight),
								ImColor(0, 255, 0, 180)
							);

							yOffset += barHeight + 3.0f;
						}

						if (c_menu::u_vars::AIShowName)
						{
							std::string nameStr = PlayerName.c_str();
							const char* nameText = nameStr.c_str();

							if (!nameText || strlen(nameText) == 0)
								nameText = "Unknown";

							ImVec2 textSize = ImGui::CalcTextSize(nameText);
							ImVec2 textPos = ImVec2(
								FootCenter.X - textSize.x * 0.5f,
								FootCenter.Y + yOffset
							);

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(textPos.x - 2, textPos.y - 2),
								ImVec2(textPos.x + textSize.x + 2, textPos.y + textSize.y + 2),
								ImColor(0, 0, 0, 180)
							);

							ImGui::GetForegroundDrawList()->AddText(
								textPos,
								c_menu::u_vars::AINameColor,
								nameText
							);

							yOffset += lineHeight;
						}

						if (c_menu::u_vars::AIShowDistance)
						{
							char distanceText[32];
							sprintf_s(distanceText, "%.1fm", distance);

							ImVec2 textSize = ImGui::CalcTextSize(distanceText);
							ImVec2 textPos = ImVec2(
								FootCenter.X - textSize.x * 0.5f,
								FootCenter.Y + yOffset
							);

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(textPos.x - 2, textPos.y - 2),
								ImVec2(textPos.x + textSize.x + 2, textPos.y + textSize.y + 2),
								ImColor(0, 0, 0, 180)
							);

							ImGui::GetForegroundDrawList()->AddText(
								textPos,
								c_menu::u_vars::AIDistanceColor,
								distanceText
							);
						}
					}

					if (c_menu::u_vars::AIEspSkeleton)
					{
						SDK::FVector2D BoneScreen, PrevBoneScreen;

						for (const std::pair<int, int>& Connection : skeleton::Connections)
						{
							const auto Bone1 = Connection.first;
							const auto Bone2 = Connection.second;

							const auto BoneLoc1 = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(Bone1));
							const auto BoneLoc2 = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(Bone2));

							if (PlayerController->ProjectWorldLocationToScreen(BoneLoc1, &BoneScreen, false) &&
								PlayerController->ProjectWorldLocationToScreen(BoneLoc2, &PrevBoneScreen, false))
							{
								ImGui::GetForegroundDrawList()->AddLine(
									ImVec2(BoneScreen.X, BoneScreen.Y),
									ImVec2(PrevBoneScreen.X, PrevBoneScreen.Y),
									EntityVisible ? c_menu::u_vars::AISkeletonVisibleColor : c_menu::u_vars::AISkeletonHiddenColor,
									1.0f
								);
							}
						}

						const auto HeadLoc = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(skeleton::head));
						if (PlayerController->ProjectWorldLocationToScreen(HeadLoc, &BoneScreen, false))
						{
							ImGui::GetForegroundDrawList()->AddCircle(
								ImVec2(BoneScreen.X, BoneScreen.Y),
								2.0f,
								ImColor(255, 255, 255),
								12
							);
						}
					}
				}

				if (c_menu::u_vars::Aimbot)
				{
					float Distance = Distance2D(ScreenCenter, Head);
					if (Distance < ClosestDistance && Distance < c_menu::u_vars::FovRadius && distance <= c_menu::u_vars::AIMaxDistance)
					{
						static int boneId = skeleton::head;

						switch (c_menu::u_vars::AimBone)
						{
						case 0:
							boneId = skeleton::head;
							break;
						case 1:
							boneId = skeleton::spine_02;
							break;
						case 2:
							boneId = skeleton::Pelvis;
							break;
						default:
							break;
						}

						ClosestDistance = Distance;
						Target = PlayerCharacter;
						AimLocation = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(boneId));

						if (AimLocation.X && AimLocation.Y && AimLocation.Z)
						{
							if (GetAsyncKeyState(VK_XBUTTON1) && 0x1)
								SetRotation(Target, AimLocation, EntityVisible);
						}
					}
				}
			}

			if (Actor->IsA(SDK::ABP_MasterScavenger_C::StaticClass()))
			{
				SDK::ABP_MasterScavenger_C* PlayerCharacter = (SDK::ABP_MasterScavenger_C*)Actor;
				if (!PlayerCharacter)
					continue;

				if (!PlayerCharacter->BP_AIComponent) continue;
				auto MaxHealth = PlayerCharacter->BP_AIComponent->MaxHealth;
				auto Health = PlayerCharacter->BP_AIComponent->Health;

				if (PlayerCharacter->BP_AIComponent->Dead)
					continue;

				auto PlayerName = "Scavenger";
				bool EntityVisible = PlayerController->LineOfSightTo(PlayerCharacter, { 0.f,0.f,0.f }, false);

				SDK::FVector2D FootLeft = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::Foot_R);
				SDK::FVector2D FootRight = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::Foot_L);

				SDK::FVector2D FootCenter = {
					(FootLeft.X + FootRight.X) / 2.0f,
					(FootLeft.Y + FootRight.Y) / 2.0f
				};

				SDK::FVector2D Head = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::head);

				if (!Head.X || !Head.Y)
					continue;

				float height = Head.Y - FootCenter.Y;
				float width = height / 4.f;

				Color = ImColor(255, 255, 20);

				if (EntityVisible)
					Color = ImColor(255, 20, 20);

				// Calculate distance once
				SDK::FVector MyLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
				SDK::FVector TargetLocation = PlayerCharacter->K2_GetActorLocation();
				SDK::FVector Difference = VectorSubtract(TargetLocation, MyLocation);
				float distance = std::sqrt(Difference.X * Difference.X + Difference.Y * Difference.Y + Difference.Z * Difference.Z) / 100.0f; // Convert to meters

				// Check if within max distance for ESP
				if (distance <= c_menu::u_vars::AIMaxDistance)
				{
					if (c_menu::u_vars::AIShowName || c_menu::u_vars::AIShowHealth || c_menu::u_vars::AIShowDistance)
					{
						float yOffset = 5.0f;
						const float lineHeight = 17.0f;
						const float barWidth = 50.0f;
						const float barHeight = 5.0f;

						if (c_menu::u_vars::AIShowHealth)
						{
							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(FootCenter.X - barWidth / 2, FootCenter.Y + yOffset),
								ImVec2(FootCenter.X + barWidth / 2, FootCenter.Y + yOffset + barHeight),
								ImColor(255, 0, 0, 180)
							);

							float healthPercentage = Health / MaxHealth;
							healthPercentage = std::clamp(healthPercentage, 0.0f, 1.0f);
							float healthWidth = barWidth * healthPercentage;

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(FootCenter.X - barWidth / 2, FootCenter.Y + yOffset),
								ImVec2(FootCenter.X - barWidth / 2 + healthWidth, FootCenter.Y + yOffset + barHeight),
								ImColor(0, 255, 0, 180)
							);

							yOffset += barHeight + 3.0f;
						}

						if (c_menu::u_vars::AIShowName)
						{
							std::string nameStr = PlayerName;
							const char* nameText = nameStr.c_str();

							if (!nameText || strlen(nameText) == 0)
								nameText = "Unknown";

							ImVec2 textSize = ImGui::CalcTextSize(nameText);
							ImVec2 textPos = ImVec2(
								FootCenter.X - textSize.x * 0.5f,
								FootCenter.Y + yOffset
							);

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(textPos.x - 2, textPos.y - 2),
								ImVec2(textPos.x + textSize.x + 2, textPos.y + textSize.y + 2),
								ImColor(0, 0, 0, 180)
							);

							ImGui::GetForegroundDrawList()->AddText(
								textPos,
								c_menu::u_vars::AINameColor,
								nameText
							);

							yOffset += lineHeight;
						}

						if (c_menu::u_vars::AIShowDistance)
						{
							char distanceText[32];
							sprintf_s(distanceText, "%.1fm", distance);

							ImVec2 textSize = ImGui::CalcTextSize(distanceText);
							ImVec2 textPos = ImVec2(
								FootCenter.X - textSize.x * 0.5f,
								FootCenter.Y + yOffset
							);

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(textPos.x - 2, textPos.y - 2),
								ImVec2(textPos.x + textSize.x + 2, textPos.y + textSize.y + 2),
								ImColor(0, 0, 0, 180)
							);

							ImGui::GetForegroundDrawList()->AddText(
								textPos,
								c_menu::u_vars::AIDistanceColor,
								distanceText
							);
						}
					}

					if (c_menu::u_vars::AIEspSkeleton)
					{
						SDK::FVector2D BoneScreen, PrevBoneScreen;

						for (const std::pair<int, int>& Connection : skeleton::Connections)
						{
							const auto Bone1 = Connection.first;
							const auto Bone2 = Connection.second;

							const auto BoneLoc1 = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(Bone1));
							const auto BoneLoc2 = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(Bone2));

							if (PlayerController->ProjectWorldLocationToScreen(BoneLoc1, &BoneScreen, false) &&
								PlayerController->ProjectWorldLocationToScreen(BoneLoc2, &PrevBoneScreen, false))
							{
								ImGui::GetForegroundDrawList()->AddLine(
									ImVec2(BoneScreen.X, BoneScreen.Y),
									ImVec2(PrevBoneScreen.X, PrevBoneScreen.Y),
									EntityVisible ? c_menu::u_vars::AISkeletonVisibleColor : c_menu::u_vars::AISkeletonHiddenColor,
									1.0f
								);
							}
						}

						const auto HeadLoc = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(skeleton::head));
						if (PlayerController->ProjectWorldLocationToScreen(HeadLoc, &BoneScreen, false))
						{
							ImGui::GetForegroundDrawList()->AddCircle(
								ImVec2(BoneScreen.X, BoneScreen.Y),
								2.0f,
								ImColor(255, 255, 255),
								12
							);
						}
					}
				}

				if (c_menu::u_vars::Aimbot)
				{
					float Distance = Distance2D(ScreenCenter, Head);
					if (Distance < ClosestDistance && Distance < c_menu::u_vars::FovRadius && distance <= c_menu::u_vars::AIMaxDistance)
					{
						static int boneId = skeleton::head;

						switch (c_menu::u_vars::AimBone)
						{
						case 0:
							boneId = skeleton::head;
							break;
						case 1:
							boneId = skeleton::spine_02;
							break;
						case 2:
							boneId = skeleton::Pelvis;
							break;
						default:
							break;
						}

						ClosestDistance = Distance;
						Target = PlayerCharacter;
						AimLocation = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(boneId));

						if (AimLocation.X && AimLocation.Y && AimLocation.Z)
						{
							if (GetAsyncKeyState(VK_XBUTTON1) && 0x1)
								SetRotation(Target, AimLocation, EntityVisible);
						}
					}
				}
			}

			if (Actor->IsA(SDK::ABP_RandomCivilian_C::StaticClass()))
			{
				SDK::ABP_RandomCivilian_C* PlayerCharacter = (SDK::ABP_RandomCivilian_C*)Actor;
				if (!PlayerCharacter)
					continue;

				auto MaxHealth = 50;
				auto Health = PlayerCharacter->Health;

				if (PlayerCharacter->Dead)
					continue;

				auto PlayerName = PlayerCharacter->GetName();
				bool EntityVisible = PlayerController->LineOfSightTo(PlayerCharacter, { 0.f,0.f,0.f }, false);

				SDK::FVector2D FootLeft = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::Foot_R);
				SDK::FVector2D FootRight = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::Foot_L);

				SDK::FVector2D FootCenter = {
					(FootLeft.X + FootRight.X) / 2.0f,
					(FootLeft.Y + FootRight.Y) / 2.0f
				};

				SDK::FVector2D Head = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::head);

				if (!Head.X || !Head.Y)
					continue;

				float height = Head.Y - FootCenter.Y;
				float width = height / 4.f;

				Color = ImColor(255, 255, 20);

				if (EntityVisible)
					Color = ImColor(255, 20, 20);

				// Calculate distance once
				SDK::FVector MyLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
				SDK::FVector TargetLocation = PlayerCharacter->K2_GetActorLocation();
				SDK::FVector Difference = VectorSubtract(TargetLocation, MyLocation);
				float distance = std::sqrt(Difference.X * Difference.X + Difference.Y * Difference.Y + Difference.Z * Difference.Z) / 100.0f; // Convert to meters

				// Check if within max distance for ESP
				if (distance <= c_menu::u_vars::CivilianMaxDistance)
				{
					if (c_menu::u_vars::CivilianShowName || c_menu::u_vars::CivilianShowHealth || c_menu::u_vars::CivilianShowDistance)
					{
						float yOffset = 5.0f;
						const float lineHeight = 17.0f;
						const float barWidth = 50.0f;
						const float barHeight = 5.0f;

						if (c_menu::u_vars::CivilianShowHealth)
						{
							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(FootCenter.X - barWidth / 2, FootCenter.Y + yOffset),
								ImVec2(FootCenter.X + barWidth / 2, FootCenter.Y + yOffset + barHeight),
								ImColor(255, 0, 0, 180)
							);

							float healthPercentage = Health / MaxHealth;
							healthPercentage = std::clamp(healthPercentage, 0.0f, 1.0f);
							float healthWidth = barWidth * healthPercentage;

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(FootCenter.X - barWidth / 2, FootCenter.Y + yOffset),
								ImVec2(FootCenter.X - barWidth / 2 + healthWidth, FootCenter.Y + yOffset + barHeight),
								ImColor(0, 255, 0, 180)
							);

							yOffset += barHeight + 3.0f;
						}

						if (c_menu::u_vars::CivilianShowName)
						{
							std::string nameStr = "Civilian";
							const char* nameText = nameStr.c_str();

							if (!nameText || strlen(nameText) == 0)
								nameText = "Unknown";

							ImVec2 textSize = ImGui::CalcTextSize(nameText);
							ImVec2 textPos = ImVec2(
								FootCenter.X - textSize.x * 0.5f,
								FootCenter.Y + yOffset
							);

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(textPos.x - 2, textPos.y - 2),
								ImVec2(textPos.x + textSize.x + 2, textPos.y + textSize.y + 2),
								ImColor(0, 0, 0, 180)
							);

							ImGui::GetForegroundDrawList()->AddText(
								textPos,
								c_menu::u_vars::CivilianNameColor,
								nameText
							);
							
							yOffset += lineHeight;
						}

						if (c_menu::u_vars::CivilianShowDistance)
						{
							char distanceText[32];
							sprintf_s(distanceText, "%.1fm", distance);
							
							ImVec2 textSize = ImGui::CalcTextSize(distanceText);
							ImVec2 textPos = ImVec2(
								FootCenter.X - textSize.x * 0.5f,
								FootCenter.Y + yOffset
							);

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(textPos.x - 2, textPos.y - 2),
								ImVec2(textPos.x + textSize.x + 2, textPos.y + textSize.y + 2),
								ImColor(0, 0, 0, 180)
							);

							ImGui::GetForegroundDrawList()->AddText(
								textPos,
								c_menu::u_vars::CivilianDistanceColor,
								distanceText
							);
						}
					}

					if (c_menu::u_vars::CivilianEspSkeleton)
					{
						SDK::FVector2D BoneScreen, PrevBoneScreen;

						for (const std::pair<int, int>& Connection : skeleton::Connections)
						{
							const auto Bone1 = Connection.first;
							const auto Bone2 = Connection.second;

							const auto BoneLoc1 = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(Bone1));
							const auto BoneLoc2 = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(Bone2));

							if (PlayerController->ProjectWorldLocationToScreen(BoneLoc1, &BoneScreen, false) &&
								PlayerController->ProjectWorldLocationToScreen(BoneLoc2, &PrevBoneScreen, false))
							{
								ImGui::GetForegroundDrawList()->AddLine(
									ImVec2(BoneScreen.X, BoneScreen.Y),
									ImVec2(PrevBoneScreen.X, PrevBoneScreen.Y),
									EntityVisible ? c_menu::u_vars::CivilianSkeletonVisibleColor : c_menu::u_vars::CivilianSkeletonHiddenColor,
									1.0f
								);
							}
						}

						const auto HeadLoc = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(skeleton::head));
						if (PlayerController->ProjectWorldLocationToScreen(HeadLoc, &BoneScreen, false))
						{
							ImGui::GetForegroundDrawList()->AddCircle(
								ImVec2(BoneScreen.X, BoneScreen.Y),
								2.0f,
								ImColor(255, 255, 255),
								12
							);
						}
					}
				}
			}

			if (Actor->IsA(SDK::ABP_MasterTrader_C::StaticClass()))
			{
				SDK::ABP_MasterTrader_C* PlayerCharacter = (SDK::ABP_MasterTrader_C*)Actor;
				if (!PlayerCharacter)
					continue;

				if (!PlayerCharacter->BP_AIComponent) continue;
				auto MaxHealth = PlayerCharacter->BP_AIComponent->MaxHealth;
				auto Health = PlayerCharacter->BP_AIComponent->Health;

				if (PlayerCharacter->BP_AIComponent->Dead)
					continue;

				bool EntityVisible = PlayerController->LineOfSightTo(PlayerCharacter, { 0.f,0.f,0.f }, false);

				SDK::FVector2D FootLeft = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::Foot_R);
				SDK::FVector2D FootRight = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::Foot_L);

				SDK::FVector2D FootCenter = {
					(FootLeft.X + FootRight.X) / 2.0f,
					(FootLeft.Y + FootRight.Y) / 2.0f
				};

				SDK::FVector2D Head = BoneToScreenLocation(PlayerController, PlayerCharacter, skeleton::head);

				if (!Head.X || !Head.Y)
					continue;

				float height = Head.Y - FootCenter.Y;
				float width = height / 4.f;

				Color = ImColor(255, 255, 20);

				if (EntityVisible)
					Color = ImColor(255, 20, 20);

				// Calculate distance once
				SDK::FVector MyLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
				SDK::FVector TargetLocation = PlayerCharacter->K2_GetActorLocation();
				SDK::FVector Difference = VectorSubtract(TargetLocation, MyLocation);
				float distance = std::sqrt(Difference.X * Difference.X + Difference.Y * Difference.Y + Difference.Z * Difference.Z) / 100.0f; // Convert to meters

				// Check if within max distance for ESP
				if (distance <= c_menu::u_vars::TraderMaxDistance)
				{
					if (c_menu::u_vars::TraderShowName || c_menu::u_vars::TraderShowHealth || c_menu::u_vars::TraderShowDistance)
					{
						float yOffset = 5.0f;
						const float lineHeight = 17.0f;
						const float barWidth = 50.0f;
						const float barHeight = 5.0f;

						if (c_menu::u_vars::TraderShowHealth)
						{
							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(FootCenter.X - barWidth / 2, FootCenter.Y + yOffset),
								ImVec2(FootCenter.X + barWidth / 2, FootCenter.Y + yOffset + barHeight),
								ImColor(255, 0, 0, 180)
							);

							float healthPercentage = Health / MaxHealth;
							healthPercentage = std::clamp(healthPercentage, 0.0f, 1.0f);
							float healthWidth = barWidth * healthPercentage;

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(FootCenter.X - barWidth / 2, FootCenter.Y + yOffset),
								ImVec2(FootCenter.X - barWidth / 2 + healthWidth, FootCenter.Y + yOffset + barHeight),
								ImColor(0, 255, 0, 180)
							);

							yOffset += barHeight + 3.0f;
						}

						if (c_menu::u_vars::TraderShowName)
						{
							std::string nameStr = "Trader";
							const char* nameText = nameStr.c_str();

							if (!nameText || strlen(nameText) == 0)
								nameText = "Unknown";

							ImVec2 textSize = ImGui::CalcTextSize(nameText);
							ImVec2 textPos = ImVec2(
								FootCenter.X - textSize.x * 0.5f,
								FootCenter.Y + yOffset
							);

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(textPos.x - 2, textPos.y - 2),
								ImVec2(textPos.x + textSize.x + 2, textPos.y + textSize.y + 2),
								ImColor(0, 0, 0, 180)
							);

							ImGui::GetForegroundDrawList()->AddText(
								textPos,
								c_menu::u_vars::TraderNameColor,
								nameText
							);
							
							yOffset += lineHeight;
						}

						if (c_menu::u_vars::TraderShowDistance)
						{
							char distanceText[32];
							sprintf_s(distanceText, "%.1fm", distance);
							
							ImVec2 textSize = ImGui::CalcTextSize(distanceText);
							ImVec2 textPos = ImVec2(
								FootCenter.X - textSize.x * 0.5f,
								FootCenter.Y + yOffset
							);

							ImGui::GetForegroundDrawList()->AddRectFilled(
								ImVec2(textPos.x - 2, textPos.y - 2),
								ImVec2(textPos.x + textSize.x + 2, textPos.y + textSize.y + 2),
								ImColor(0, 0, 0, 180)
							);

							ImGui::GetForegroundDrawList()->AddText(
								textPos,
								c_menu::u_vars::TraderDistanceColor,
								distanceText
							);
						}
					}

					if (c_menu::u_vars::TraderEspSkeleton)
					{
						SDK::FVector2D BoneScreen, PrevBoneScreen;

						for (const std::pair<int, int>& Connection : skeleton::Connections)
						{
							const auto Bone1 = Connection.first;
							const auto Bone2 = Connection.second;

							const auto BoneLoc1 = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(Bone1));
							const auto BoneLoc2 = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(Bone2));

							if (PlayerController->ProjectWorldLocationToScreen(BoneLoc1, &BoneScreen, false) &&
								PlayerController->ProjectWorldLocationToScreen(BoneLoc2, &PrevBoneScreen, false))
							{
								ImGui::GetForegroundDrawList()->AddLine(
									ImVec2(BoneScreen.X, BoneScreen.Y),
									ImVec2(PrevBoneScreen.X, PrevBoneScreen.Y),
									EntityVisible ? c_menu::u_vars::TraderSkeletonVisibleColor : c_menu::u_vars::TraderSkeletonHiddenColor,
									1.0f
								);
							}
						}

						const auto HeadLoc = PlayerCharacter->Mesh->GetSocketLocation(PlayerCharacter->Mesh->GetBoneName(skeleton::head));
						if (PlayerController->ProjectWorldLocationToScreen(HeadLoc, &BoneScreen, false))
						{
							ImGui::GetForegroundDrawList()->AddCircle(
								ImVec2(BoneScreen.X, BoneScreen.Y),
								2.0f,
								ImColor(255, 255, 255),
								12
							);
						}
					}
				}
			}
		}
	}
};
