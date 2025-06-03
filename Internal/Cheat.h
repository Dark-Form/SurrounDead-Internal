#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#pragma once

namespace Utils {
    SDK::FVector VectorSubtract(SDK::FVector Vector1, SDK::FVector Vector2) {
	SDK::FVector Vec;
	Vec.X = Vector1.X - Vector2.X;
	Vec.Y = Vector1.Y - Vector2.Y;
	Vec.Z = Vector1.Z - Vector2.Z;
	return Vec;
}

    SDK::FVector VectorAdd(SDK::FVector Vector1, SDK::FVector Vector2) {
	SDK::FVector Vec;
	Vec.X = Vector1.X + Vector2.X;
	Vec.Y = Vector1.Y + Vector2.Y;
	Vec.Z = Vector1.Z + Vector2.Z;
	return Vec;
}

    float Distance2D(SDK::FVector2D main, SDK::FVector2D other) {
        float dx = main.X - other.X;
        float dy = main.Y - other.Y;
        return std::sqrt(dx * dx + dy * dy);
    }

    float CalculateDistance(SDK::FVector MyLocation, SDK::FVector TargetLocation) {
        SDK::FVector Difference = VectorSubtract(TargetLocation, MyLocation);
        return std::sqrt(Difference.X * Difference.X + Difference.Y * Difference.Y + Difference.Z * Difference.Z) / 100.0f;
    }

    SDK::FVector2D BoneToScreenLocation(SDK::APlayerController* Controller, SDK::ACharacter* Player, int BoneId) {
		if (!Controller || !Player || !Player->Mesh)
			return { 0, 0 };

		SDK::USkeletalMeshComponent* Mesh = Player->Mesh;
		SDK::FVector BoneLocation = Mesh->GetSocketLocation(Mesh->GetBoneName(BoneId));
		SDK::FVector2D BoneScreenLocation;

		if (Controller->ProjectWorldLocationToScreen(BoneLocation, &BoneScreenLocation, false))
			return BoneScreenLocation;

		return { 0, 0 };
	}

    void DrawHealthBar(ImDrawList* drawList, const ImVec2& position, float health, float maxHealth, float width, float height) {
        drawList->AddRectFilled(
            ImVec2(position.x - width / 2, position.y),
            ImVec2(position.x + width / 2, position.y + height),
								ImColor(255, 0, 0, 180)
							);

        float healthPercentage = health / maxHealth;
		healthPercentage = std::clamp(healthPercentage, 0.0f, 1.0f);
        float healthWidth = width * healthPercentage;

        drawList->AddRectFilled(
            ImVec2(position.x - width / 2, position.y),
            ImVec2(position.x - width / 2 + healthWidth, position.y + height),
								ImColor(0, 255, 0, 180)
							);
    }

    void DrawTextWithBackground(ImDrawList* drawList, const ImVec2& position, const char* text, ImColor textColor) {
        ImVec2 textSize = ImGui::CalcTextSize(text);
							ImVec2 textPos = ImVec2(
            position.x - textSize.x * 0.5f,
            position.y
							);

        drawList->AddRectFilled(
								ImVec2(textPos.x - 2, textPos.y - 2),
								ImVec2(textPos.x + textSize.x + 2, textPos.y + textSize.y + 2),
								ImColor(0, 0, 0, 180)
							);

        drawList->AddText(textPos, textColor, text);
    }

    void DrawSkeleton(ImDrawList* drawList, SDK::ACharacter* Character, SDK::APlayerController* PlayerController, bool isVisible, ImColor visibleColor, ImColor hiddenColor) {
        SDK::FVector2D BoneScreen, PrevBoneScreen;
        auto gMath = (SDK::UKismetMathLibrary*)SDK::UKismetMathLibrary::StaticClass();

        for (const std::pair<int, int>& Connection : skeleton::Connections) {
            const auto Bone1 = Connection.first;
            const auto Bone2 = Connection.second;

            const auto BoneLoc1 = Character->Mesh->GetSocketLocation(Character->Mesh->GetBoneName(Bone1));
            const auto BoneLoc2 = Character->Mesh->GetSocketLocation(Character->Mesh->GetBoneName(Bone2));

            if (PlayerController->ProjectWorldLocationToScreen(BoneLoc1, &BoneScreen, false) &&
                PlayerController->ProjectWorldLocationToScreen(BoneLoc2, &PrevBoneScreen, false)) {
                
                if (c_menu::u_vars::Debug3DBones) {
                    const float cylinderRadius = 2.0f;
                    const int cylinderSegments = 8;

                    SDK::FVector boneDir = BoneLoc2 - BoneLoc1;
                    float boneLength = gMath->VSize(boneDir);
                    boneDir = gMath->Normal(boneDir, 0.0f);

                    SDK::FVector perp1, perp2;
                    if (std::abs(boneDir.Z) < 0.99f) {
                        perp1 = SDK::FVector(-boneDir.Y, boneDir.X, 0.0f);
                    } else {
                        perp1 = SDK::FVector(0.0f, -boneDir.Z, boneDir.Y);
                    }
                    perp1 = gMath->Normal(perp1, 0.0f);
                    perp2 = gMath->Cross_VectorVector(boneDir, perp1);
                    perp2 = gMath->Normal(perp2, 0.0f);

                    for (int i = 0; i < cylinderSegments; i++) {
                        float angle1 = (float)i / cylinderSegments * 2.0f * 3.14159f;
                        float angle2 = (float)(i + 1) / cylinderSegments * 2.0f * 3.14159f;

                        SDK::FVector offset1 = perp1 * std::cos(angle1) * cylinderRadius + perp2 * std::sin(angle1) * cylinderRadius;
                        SDK::FVector offset2 = perp1 * std::cos(angle2) * cylinderRadius + perp2 * std::sin(angle2) * cylinderRadius;

                        SDK::FVector2D screen1, screen2, screen3, screen4;
                        if (PlayerController->ProjectWorldLocationToScreen(BoneLoc1 + offset1, &screen1, false) &&
                            PlayerController->ProjectWorldLocationToScreen(BoneLoc2 + offset1, &screen2, false) &&
                            PlayerController->ProjectWorldLocationToScreen(BoneLoc1 + offset2, &screen3, false) &&
                            PlayerController->ProjectWorldLocationToScreen(BoneLoc2 + offset2, &screen4, false)) {

                            drawList->AddQuadFilled(
                                ImVec2(screen1.X, screen1.Y),
                                ImVec2(screen2.X, screen2.Y),
                                ImVec2(screen4.X, screen4.Y),
                                ImVec2(screen3.X, screen3.Y),
                                isVisible ? visibleColor : hiddenColor
                            );
                        }
                    }
                } else {
                    drawList->AddLine(
									ImVec2(BoneScreen.X, BoneScreen.Y),
									ImVec2(PrevBoneScreen.X, PrevBoneScreen.Y),
                        isVisible ? visibleColor : hiddenColor,
                        2.0f
                    );
                }
            }
        }

        const auto HeadLoc = Character->Mesh->GetSocketLocation(Character->Mesh->GetBoneName(skeleton::head));
        if (PlayerController->ProjectWorldLocationToScreen(HeadLoc, &BoneScreen, false)) {
            drawList->AddCircle(
								ImVec2(BoneScreen.X, BoneScreen.Y),
                4.0f,
                ImColor(255, 255, 255, 255),
								12
							);
						}
		}

    SDK::FVector GetForwardDirection(SDK::FRotator Rotation) {
        auto gMath = (SDK::UKismetMathLibrary*)SDK::UKismetMathLibrary::StaticClass();
        SDK::FVector Forward = gMath->GetForwardVector(Rotation);
        Forward.Z = 0; // Keep it horizontal
        Forward.Normalize();
        return Forward;
    }
}

void SetRotation(SDK::ACharacter* Target, SDK::FVector AimLocation, bool is_visible) {
    if (c_menu::u_vars::VisCheck && !is_visible) return;

    SDK::UWorld* Gworld = SDK::UWorld::GetWorld();
    if (!Gworld) return;

    SDK::UGameInstance* GameInstance = Gworld->OwningGameInstance;
    if (!GameInstance) return;

    SDK::ULocalPlayer* LocalPlayer = GameInstance->LocalPlayers[0];
    if (!LocalPlayer) return;

    auto Camera = LocalPlayer->PlayerController->PlayerCameraManager;
    SDK::FVector MyLocation = Camera->GetCameraLocation();
    
    auto gMath = (SDK::UKismetMathLibrary*)SDK::UKismetMathLibrary::StaticClass();
    SDK::FRotator AimRotation = gMath->FindLookAtRotation(MyLocation, AimLocation);
    LocalPlayer->PlayerController->ClientSetRotation(AimRotation, false);
}

void DrawESP(SDK::ACharacter* Character, SDK::APlayerController* PlayerController, 
    const char* name, float health, float maxHealth, float distance,
    bool showName, bool showHealth, bool showDistance, bool showSkeleton,
    ImColor nameColor, ImColor distanceColor, ImColor skeletonVisibleColor, ImColor skeletonHiddenColor,
    ImColor directionColor,
    float maxDistance) {
    
    if (distance > maxDistance) return;

    bool isVisible = PlayerController->LineOfSightTo(Character, { 0.f,0.f,0.f }, false);
    
    SDK::FVector2D FootLeft = Utils::BoneToScreenLocation(PlayerController, Character, skeleton::Foot_R);
    SDK::FVector2D FootRight = Utils::BoneToScreenLocation(PlayerController, Character, skeleton::Foot_L);

				SDK::FVector2D FootCenter = {
					(FootLeft.X + FootRight.X) / 2.0f,
					(FootLeft.Y + FootRight.Y) / 2.0f
				};
				
    SDK::FRotator Rotation = Character->K2_GetActorRotation();
    SDK::FVector Forward = Utils::GetForwardDirection(Rotation);
    
    SDK::FVector StartPos = Character->Mesh->GetSocketLocation(Character->Mesh->GetBoneName(skeleton::head));
    SDK::FVector EndPos = StartPos + (Forward * 50.0f);
    
    SDK::FVector2D StartScreen, EndScreen;
    if (PlayerController->ProjectWorldLocationToScreen(StartPos, &StartScreen, false) &&
        PlayerController->ProjectWorldLocationToScreen(EndPos, &EndScreen, false)) {
        
        ImGui::GetForegroundDrawList()->AddLine(
            ImVec2(StartScreen.X, StartScreen.Y),
            ImVec2(EndScreen.X, EndScreen.Y),
            directionColor,
            2.0f
        );
        
        float arrowSize = 5.0f;
        float angle = std::atan2(EndScreen.Y - StartScreen.Y, EndScreen.X - StartScreen.X);
        ImVec2 arrowPoint1(EndScreen.X - arrowSize * std::cos(angle - 0.5f),
                         EndScreen.Y - arrowSize * std::sin(angle - 0.5f));
        ImVec2 arrowPoint2(EndScreen.X - arrowSize * std::cos(angle + 0.5f),
                         EndScreen.Y - arrowSize * std::sin(angle + 0.5f));
        
        ImGui::GetForegroundDrawList()->AddTriangleFilled(
            ImVec2(EndScreen.X, EndScreen.Y),
            arrowPoint1,
            arrowPoint2,
            directionColor
        );
    }

						float yOffset = 5.0f;
						const float lineHeight = 17.0f;
						const float barWidth = 50.0f;
						const float barHeight = 5.0f;

    if (c_menu::u_vars::DebugESP) {
        char debugInfo[256];
        SDK::FVector Location = Character->K2_GetActorLocation();
        sprintf_s(debugInfo, "Pos: %.1f, %.1f, %.1f\nRot: %.1f, %.1f, %.1f\nDist: %.1fm\nVisible: %s",
            Location.X, Location.Y, Location.Z,
            Rotation.Pitch, Rotation.Yaw, Rotation.Roll,
            distance,
            isVisible ? "Yes" : "No"
        );

        Utils::DrawTextWithBackground(ImGui::GetForegroundDrawList(),
            ImVec2(FootCenter.X, FootCenter.Y + yOffset),
            debugInfo,
            ImColor(255, 255, 255));
        yOffset += lineHeight * 4;
    }

    if (showHealth) {
        Utils::DrawHealthBar(ImGui::GetForegroundDrawList(), 
            ImVec2(FootCenter.X, FootCenter.Y + yOffset), 
            health, maxHealth, barWidth, barHeight);
							yOffset += barHeight + 3.0f;
						}

    if (showName) {
        Utils::DrawTextWithBackground(ImGui::GetForegroundDrawList(),
            ImVec2(FootCenter.X, FootCenter.Y + yOffset),
            name,
            nameColor);
							yOffset += lineHeight;
						}

    if (showDistance) {
							char distanceText[32];
							sprintf_s(distanceText, "%.1fm", distance);
        Utils::DrawTextWithBackground(ImGui::GetForegroundDrawList(),
            ImVec2(FootCenter.X, FootCenter.Y + yOffset),
            distanceText,
            distanceColor);
    }

    if (showSkeleton) {
        Utils::DrawSkeleton(ImGui::GetForegroundDrawList(), Character, PlayerController,
            isVisible, skeletonVisibleColor, skeletonHiddenColor);
    }
}

void DrawDebugActorESP(SDK::AActor* Actor, SDK::APlayerController* PlayerController) {
    if (!Actor || !PlayerController) return;

    SDK::FVector ActorLocation = Actor->K2_GetActorLocation();
    SDK::FVector MyLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
    float distance = Utils::CalculateDistance(MyLocation, ActorLocation);

    if (distance > c_menu::u_vars::DebugMaxDistance) return;

    SDK::FVector2D ScreenLocation;
    if (!PlayerController->ProjectWorldLocationToScreen(ActorLocation, &ScreenLocation, false))
        return;

    char debugInfo[256];
    SDK::FRotator Rotation = Actor->K2_GetActorRotation();
    sprintf_s(debugInfo, "%s\nPos: %.1f, %.1f, %.1f\nRot: %.1f, %.1f, %.1f\nDist: %.1fm",
        Actor->GetName().c_str(),
        ActorLocation.X, ActorLocation.Y, ActorLocation.Z,
        Rotation.Pitch, Rotation.Yaw, Rotation.Roll,
        distance
    );

    Utils::DrawTextWithBackground(ImGui::GetForegroundDrawList(),
        ImVec2(ScreenLocation.X, ScreenLocation.Y),
        debugInfo,
        ImColor(255, 255, 255));
}

class c_cheat {
public:
    static inline SDK::FVector2D Screen = {
        static_cast<float>(GetSystemMetrics(SM_CXSCREEN)),
        static_cast<float>(GetSystemMetrics(SM_CYSCREEN))
    };

    static inline SDK::FVector2D ScreenCenter = {
        Screen.X / 2.f,
        Screen.Y / 2.f
    };

    static void Initialize() {
        WaypointSystem::WaypointManager::LoadWaypoints();
    }

    static void Tick() {
        if (c_menu::u_vars::SilentAim || c_menu::u_vars::Aimbot)
            ImGui::GetForegroundDrawList()->AddCircle(
                { static_cast<float>(ScreenCenter.X), static_cast<float>(ScreenCenter.Y) },
                c_menu::u_vars::FovRadius,
                ImColor(255, 255, 255, 255)
            );

        SDK::UWorld* Gworld = SDK::UWorld::GetWorld();
        if (!Gworld) return;

        SDK::UGameInstance* GameInstance = Gworld->OwningGameInstance;
        if (!GameInstance) return;

        SDK::ULocalPlayer* LocalPlayer = GameInstance->LocalPlayers[0];
        if (!LocalPlayer) return;

        SDK::APlayerController* PlayerController = LocalPlayer->PlayerController;
        if (!PlayerController) return;

        if (WaypointSystem::WaypointManager::showWaypoints) {
            SDK::FVector MyLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
            for (const auto& waypoint : WaypointSystem::WaypointManager::waypoints) {
                float distance = Utils::CalculateDistance(MyLocation, waypoint.location);
                if (distance <= WaypointSystem::WaypointManager::maxDistance) {
                    SDK::FVector2D ScreenLocation;
                    if (PlayerController->ProjectWorldLocationToScreen(waypoint.location, &ScreenLocation, false)) {
                        WaypointSystem::WaypointManager::DrawIcon(
                            ImGui::GetForegroundDrawList(),
                            ImVec2(ScreenLocation.X, ScreenLocation.Y),
                            waypoint.icon,
                            10.0f,
                            waypoint.color
                        );

                        char info[256];
                        sprintf_s(info, "%s [%.1fm]", waypoint.name.c_str(), distance);
                        Utils::DrawTextWithBackground(
                            ImGui::GetForegroundDrawList(),
                            ImVec2(ScreenLocation.X, ScreenLocation.Y - 25),
                            info,
                            waypoint.color
                        );
                    }
                }
            }
        }

        SDK::APlayerState* SelfPlayerState = PlayerController->PlayerState;
        if (!SelfPlayerState) return;

        SDK::ABP_PlayerCharacter_C* SelfPlayerCharacter = static_cast<SDK::ABP_PlayerCharacter_C*>(PlayerController->AcknowledgedPawn);
        if (!SelfPlayerCharacter) return;

        HandlePlayerCheats(SelfPlayerCharacter);

        SDK::ULevel* PersistentLevel = Gworld->PersistentLevel;
        if (!PersistentLevel) return;

        uintptr_t Actors = *(uintptr_t*)((uintptr_t)PersistentLevel + 0x98);
        if (!Actors) return;

        int32_t ActorCount = *(int32_t*)((uintptr_t)PersistentLevel + 0xa0);
        if (!ActorCount) return;

        float ClosestDistance = FLT_MAX;
        SDK::ACharacter* Target = nullptr;
        SDK::FVector AimLocation;

        for (std::int32_t i = 0; i < ActorCount; i++) {
            SDK::AActor* Actor = *(SDK::AActor**)(Actors + i * sizeof(uintptr_t));
            if (!Actor) continue;

            if (c_menu::u_vars::DebugShowAllActors) {
                DrawDebugActorESP(Actor, PlayerController);
            }

            if (Actor->IsA(SDK::ABP_FirearmPickup_C::StaticClass())) {
                HandleFirearmPickup(static_cast<SDK::ABP_FirearmPickup_C*>(Actor));
            }
            else if (Actor->IsA(SDK::ABP_MasterZombie_C::StaticClass())) {
                HandleZombie(static_cast<SDK::ABP_MasterZombie_C*>(Actor), PlayerController, ClosestDistance, Target, AimLocation);
            }
            else if (Actor->IsA(SDK::ABP_PlayerCharacter_C::StaticClass())) {
                HandlePlayer(static_cast<SDK::ABP_PlayerCharacter_C*>(Actor), PlayerController, ClosestDistance, Target, AimLocation);
            }
            else if (Actor->IsA(SDK::ABP_MasterMilitary_C::StaticClass())) {
                HandleMilitary(static_cast<SDK::ABP_MasterMilitary_C*>(Actor), PlayerController, ClosestDistance, Target, AimLocation);
            }
            else if (Actor->IsA(SDK::ABP_MasterBandit_C::StaticClass())) {
                HandleBandit(static_cast<SDK::ABP_MasterBandit_C*>(Actor), PlayerController, ClosestDistance, Target, AimLocation);
            }
            else if (Actor->IsA(SDK::ABP_MasterTrader_C::StaticClass())) {
                HandleTrader(static_cast<SDK::ABP_MasterTrader_C*>(Actor), PlayerController, ClosestDistance, Target, AimLocation);
            }
            else if (Actor->IsA(SDK::ABP_MasterScavenger_C::StaticClass())) {
                HandleScavenger(static_cast<SDK::ABP_MasterScavenger_C*>(Actor), PlayerController, ClosestDistance, Target, AimLocation);
            }
            else if (Actor->IsA(SDK::ABP_RandomCivilian_C::StaticClass())) {
                HandleCivilian(static_cast<SDK::ABP_RandomCivilian_C*>(Actor), PlayerController, ClosestDistance, Target, AimLocation);
            }
        }
    }

private:
    static void HandlePlayerCheats(SDK::ABP_PlayerCharacter_C* SelfPlayerCharacter) {
        if (c_menu::u_vars::InfStamina)
            SelfPlayerCharacter->StaminaComponent->CurrentStamina = SelfPlayerCharacter->StaminaComponent->MaxStamina;

        if (c_menu::u_vars::GodMode) {
            if (SelfPlayerCharacter->MedicalComponent->Health != SelfPlayerCharacter->MedicalComponent->MaxHealth) {
                auto neededHealth = SelfPlayerCharacter->MedicalComponent->MaxHealth - SelfPlayerCharacter->MedicalComponent->Health;
                SelfPlayerCharacter->MedicalComponent->IncreaseHealth(neededHealth);
                SelfPlayerCharacter->bCanBeDamaged = false;
                SelfPlayerCharacter->MedicalComponent->bIsActive = false;
                SelfPlayerCharacter->PlayerDead_ = false;
            }
        }

        if (c_menu::u_vars::NoDrain) {
            SelfPlayerCharacter->HungerThirstComponent->CurrentHunger = SelfPlayerCharacter->HungerThirstComponent->MaxHunger;
            SelfPlayerCharacter->HungerThirstComponent->CurrentThirst = SelfPlayerCharacter->HungerThirstComponent->MaxThirst;
            SelfPlayerCharacter->RadiationComponent->CurrentRadiation = SelfPlayerCharacter->RadiationComponent->MaxRadiation;
            SelfPlayerCharacter->RadiationComponent->InRadArea = false;
            SelfPlayerCharacter->SwimmingComponent->CurrentOxygen = SelfPlayerCharacter->SwimmingComponent->MaxOxygen;
        }

        if (c_menu::u_vars::SpeedHack) {
            if (SelfPlayerCharacter->CharacterMovement) {
                SelfPlayerCharacter->CustomTimeDilation = c_menu::u_vars::Speed;
            }
        }
        else {
            if (SelfPlayerCharacter->CharacterMovement) {
                SelfPlayerCharacter->CustomTimeDilation = 1.0f;
            }
        }

        if (c_menu::u_vars::InfLockPick) {
            SelfPlayerCharacter->LockPickingComponent->LPDurability = 100.0f;
        }
    }

    static void HandleFirearmPickup(SDK::ABP_FirearmPickup_C* firearm) {
        if (!firearm) return;

        if (c_menu::u_vars::NoRecoil) {
            if (firearm->RecoilTL) {
                firearm->RecoilTL->Stop();
                firearm->RecoilTL = NULL;
            }
            if (firearm->ResetRecoilTL) {
                firearm->ResetRecoilTL->Stop();
                firearm->ResetRecoilTL = NULL;
            }

            firearm->RecoilTL_Recoil_297C066B40C93F9CB632DC9EE7ECC8B0 = 0.0f;
            firearm->ResetRecoilTL_Reset_0A95F0FE40AECD2F428F87B705900F3B = 0.0f;
            firearm->TempPitch = 0.0f;
            firearm->TempYaw = 0.0f;

            firearm->RecoilTL__Direction_297C066B40C93F9CB632DC9EE7ECC8B0 = SDK::ETimelineDirection::Forward;
            firearm->ResetRecoilTL__Direction_0A95F0FE40AECD2F428F87B705900F3B = SDK::ETimelineDirection::Forward;

            firearm->CurrentlyFiring_ = false;

            if (firearm->BP_WeaponsPickupComponent) {
                firearm->BP_WeaponsPickupComponent->RecoilData.VerticalRandomDeviation_25_D44DA64542DCF716F8F2A69369F4554B = 0.0f;
                firearm->BP_WeaponsPickupComponent->RecoilData.HorizontalRandomDeviation_27_56C9DAF44C44AC78FE3FC2AAF8B8EBC5 = 0.0f;
                firearm->BP_WeaponsPickupComponent->RecoilData.RecoilHorizontal_22_B0DAF3994641A2DCBF762BABA9097AFE = 0.0f;
                firearm->BP_WeaponsPickupComponent->RecoilData.RecoilVertical_21_C8295976496E0131B831FD9D404F09C1 = 0.0f;
                firearm->BP_WeaponsPickupComponent->RecoilRate = 0.0f;
                firearm->BP_WeaponsPickupComponent->ResetRecoilDivider = 0.0f;
            }
        }

        if (c_menu::u_vars::FullAuto) {
            if (!firearm->BP_WeaponsPickupComponent)
                return;

            firearm->BP_WeaponsPickupComponent->IsWeaponAutomatic_ = true;
        }

        if (c_menu::u_vars::InfAmmo) {
            firearm->FireReady = true;

            if (firearm->CurrentMag) {
                firearm->CurrentMag->ItemCount = 999;           
                if (firearm->CurrentMag->JigDataAsset) {
                    firearm->CurrentMag->JigDataAsset->Count = 999;
                }
            }

            SDK::UJSI_Slot_C* chamberSlot = nullptr;
            int chamberCount = 0;
            int chamberAssetCount = 0;
            if (firearm->ChamberContainer) {
                firearm->ChamberContainer->GetLastItem(&chamberSlot);
                if (chamberSlot != nullptr) {
                    chamberSlot->ItemCount = 999;
                    chamberCount = chamberSlot->ItemCount;
                    if (chamberSlot->JigDataAsset != nullptr) {
                        chamberSlot->JigDataAsset->Count = 999;
                        chamberAssetCount = chamberSlot->JigDataAsset->Count;
                    }
                }
            }

            int pendingMagCount = 0;
            if (firearm->PendingMag != nullptr && firearm->PendingMag->Attachment_Info != nullptr) {
                firearm->PendingMag->Attachment_Info->Count = 999;
                pendingMagCount = firearm->PendingMag->Attachment_Info->Count;
            }
        }
    }

    static void HandleZombie(SDK::ABP_MasterZombie_C* zombie, SDK::APlayerController* PlayerController,
        float& ClosestDistance, SDK::ACharacter*& Target, SDK::FVector& AimLocation) {
        if (!zombie || !zombie->DamageComponent || zombie->IsDead_) return;

        auto MaxHealth = zombie->DamageComponent->MaxHealth;
        auto Health = zombie->DamageComponent->CurrentHealth;
        auto PlayerName = zombie->AIName;
        bool EntityVisible = PlayerController->LineOfSightTo(zombie, { 0.f,0.f,0.f }, false);

        SDK::FVector2D Head = Utils::BoneToScreenLocation(PlayerController, zombie, skeleton::head);
        if (!Head.X || !Head.Y) return;

				SDK::FVector MyLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
        SDK::FVector TargetLocation = zombie->K2_GetActorLocation();
        float distance = Utils::CalculateDistance(MyLocation, TargetLocation);

        DrawESP(zombie, PlayerController,
            PlayerName.ToString().c_str(),
            Health, MaxHealth, distance,
            c_menu::u_vars::ZombieShowName,
            c_menu::u_vars::ZombieShowHealth,
            c_menu::u_vars::ZombieShowDistance,
            c_menu::u_vars::ZombieEspSkeleton,
            c_menu::u_vars::ZombieNameColor,
            c_menu::u_vars::ZombieDistanceColor,
            c_menu::u_vars::ZombieSkeletonVisibleColor,
            c_menu::u_vars::ZombieSkeletonHiddenColor,
            c_menu::u_vars::ZombieDirectionColor,
            c_menu::u_vars::ZombieMaxDistance
        );

        if (c_menu::u_vars::Aimbot) {
            float Distance = Utils::Distance2D(ScreenCenter, Head);
            if (Distance < ClosestDistance && Distance < c_menu::u_vars::FovRadius && distance <= c_menu::u_vars::ZombieMaxDistance) {
				static int boneId = skeleton::head;
                switch (c_menu::u_vars::AimBone) {
                case 0: boneId = skeleton::head; break;
                case 1: boneId = skeleton::spine_02; break;
                case 2: boneId = skeleton::Pelvis; break;
				}

				ClosestDistance = Distance;
                Target = zombie;
                AimLocation = zombie->Mesh->GetSocketLocation(zombie->Mesh->GetBoneName(boneId));

                if (AimLocation.X && AimLocation.Y && AimLocation.Z) {
                    if (GetAsyncKeyState(VK_XBUTTON1) & 0x8000)
								SetRotation(Target, AimLocation, EntityVisible);
				}
			}
		}
	}

    static void HandlePlayer(SDK::ABP_PlayerCharacter_C* player, SDK::APlayerController* PlayerController,
        float& ClosestDistance, SDK::ACharacter*& Target, SDK::FVector& AimLocation) {
        if (!player || !player->Controller || player->Controller->IsLocalController() || !player->MedicalComponent || player->PlayerDead_) return;

        auto MaxHealth = player->MedicalComponent->MaxHealth;
        auto Health = player->MedicalComponent->Health;
        auto PlayerName = player->PlayerState->GetPlayerName();
        bool EntityVisible = PlayerController->LineOfSightTo(player, { 0.f,0.f,0.f }, false);

        SDK::FVector2D Head = Utils::BoneToScreenLocation(PlayerController, player, skeleton::head);
        if (!Head.X || !Head.Y) return;

		SDK::FVector MyLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
        SDK::FVector TargetLocation = player->K2_GetActorLocation();
        float distance = Utils::CalculateDistance(MyLocation, TargetLocation);


        DrawESP(player, PlayerController,
            PlayerName.ToString().c_str(),
            Health, MaxHealth, distance,
            c_menu::u_vars::PlayerShowName,
            c_menu::u_vars::PlayerShowHealth,
            c_menu::u_vars::PlayerShowDistance,
            c_menu::u_vars::PlayerEspSkeleton,
            c_menu::u_vars::PlayerNameColor,
            c_menu::u_vars::PlayerDistanceColor,
            c_menu::u_vars::PlayerSkeletonVisibleColor,
            c_menu::u_vars::PlayerSkeletonHiddenColor,
            c_menu::u_vars::PlayerDirectionColor,
            c_menu::u_vars::PlayerMaxDistance
        );

        if (c_menu::u_vars::Aimbot) {
            float Distance = Utils::Distance2D(ScreenCenter, Head);
            if (Distance < ClosestDistance && Distance < c_menu::u_vars::FovRadius && distance <= c_menu::u_vars::PlayerMaxDistance) {
						static int boneId = skeleton::head;
                switch (c_menu::u_vars::AimBone) {
                case 0: boneId = skeleton::head; break;
                case 1: boneId = skeleton::spine_02; break;
                case 2: boneId = skeleton::Pelvis; break;
						}

						ClosestDistance = Distance;
                Target = player;
                AimLocation = player->Mesh->GetSocketLocation(player->Mesh->GetBoneName(boneId));

                if (AimLocation.X && AimLocation.Y && AimLocation.Z) {
                    if (GetAsyncKeyState(VK_XBUTTON1) & 0x8000)
								SetRotation(Target, AimLocation, EntityVisible);
						}
					}
				}
			}

    static void HandleMilitary(SDK::ABP_MasterMilitary_C* military, SDK::APlayerController* PlayerController,
        float& ClosestDistance, SDK::ACharacter*& Target, SDK::FVector& AimLocation) {
        if (!military || !military->BP_AIComponent || military->BP_AIComponent->Dead) return;

        auto MaxHealth = military->BP_AIComponent->MaxHealth;
        auto Health = military->BP_AIComponent->Health;
        auto PlayerName = military->BP_AIComponent->AI_Character->GetName();
        bool EntityVisible = PlayerController->LineOfSightTo(military, { 0.f,0.f,0.f }, false);

        SDK::FVector2D Head = Utils::BoneToScreenLocation(PlayerController, military, skeleton::head);
        if (!Head.X || !Head.Y) return;

				SDK::FVector MyLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
        SDK::FVector TargetLocation = military->K2_GetActorLocation();
        float distance = Utils::CalculateDistance(MyLocation, TargetLocation);

        DrawESP(military, PlayerController,
            PlayerName.c_str(),
            Health, MaxHealth, distance,
            c_menu::u_vars::AIShowName,
            c_menu::u_vars::AIShowHealth,
            c_menu::u_vars::AIShowDistance,
            c_menu::u_vars::AIEspSkeleton,
								c_menu::u_vars::AINameColor,
            c_menu::u_vars::AIDistanceColor,
            c_menu::u_vars::AISkeletonVisibleColor,
            c_menu::u_vars::AISkeletonHiddenColor,
            c_menu::u_vars::AIDirectionColor,
            c_menu::u_vars::AIMaxDistance
        );

        if (c_menu::u_vars::Aimbot) {
            float Distance = Utils::Distance2D(ScreenCenter, Head);
            if (Distance < ClosestDistance && Distance < c_menu::u_vars::FovRadius && distance <= c_menu::u_vars::AIMaxDistance) {
				static int boneId = skeleton::head;
                switch (c_menu::u_vars::AimBone) {
                case 0: boneId = skeleton::head; break;
                case 1: boneId = skeleton::spine_02; break;
                case 2: boneId = skeleton::Pelvis; break;
				}

				ClosestDistance = Distance;
                Target = military;
                AimLocation = military->Mesh->GetSocketLocation(military->Mesh->GetBoneName(boneId));

                if (AimLocation.X && AimLocation.Y && AimLocation.Z) {
                    if (GetAsyncKeyState(VK_XBUTTON1) & 0x8000)
						SetRotation(Target, AimLocation, EntityVisible);
				}
			}
		}
	}

    static void HandleBandit(SDK::ABP_MasterBandit_C* bandit, SDK::APlayerController* PlayerController,
        float& ClosestDistance, SDK::ACharacter*& Target, SDK::FVector& AimLocation) {
        if (!bandit || !bandit->BP_AIComponent || bandit->BP_AIComponent->Dead) return;

        auto MaxHealth = bandit->BP_AIComponent->MaxHealth;
        auto Health = bandit->BP_AIComponent->Health;
        const char* PlayerName = "Bandit";
        bool EntityVisible = PlayerController->LineOfSightTo(bandit, { 0.f,0.f,0.f }, false);

        SDK::FVector2D Head = Utils::BoneToScreenLocation(PlayerController, bandit, skeleton::head);
        if (!Head.X || !Head.Y) return;

		SDK::FVector MyLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
        SDK::FVector TargetLocation = bandit->K2_GetActorLocation();
        float distance = Utils::CalculateDistance(MyLocation, TargetLocation);

        DrawESP(bandit, PlayerController,
            PlayerName,
            Health, MaxHealth, distance,
            c_menu::u_vars::AIShowName,
            c_menu::u_vars::AIShowHealth,
            c_menu::u_vars::AIShowDistance,
            c_menu::u_vars::AIEspSkeleton,
			c_menu::u_vars::AINameColor,
			c_menu::u_vars::AIDistanceColor,
            c_menu::u_vars::AISkeletonVisibleColor,
            c_menu::u_vars::AISkeletonHiddenColor,
            c_menu::u_vars::AIDirectionColor,
            c_menu::u_vars::AIMaxDistance
        );

        if (c_menu::u_vars::Aimbot) {
            float Distance = Utils::Distance2D(ScreenCenter, Head);
            if (Distance < ClosestDistance && Distance < c_menu::u_vars::FovRadius && distance <= c_menu::u_vars::AIMaxDistance) {
						static int boneId = skeleton::head;
                switch (c_menu::u_vars::AimBone) {
                case 0: boneId = skeleton::head; break;
                case 1: boneId = skeleton::spine_02; break;
                case 2: boneId = skeleton::Pelvis; break;
						}

						ClosestDistance = Distance;
                Target = bandit;
                AimLocation = bandit->Mesh->GetSocketLocation(bandit->Mesh->GetBoneName(boneId));

                if (AimLocation.X && AimLocation.Y && AimLocation.Z) {
                    if (GetAsyncKeyState(VK_XBUTTON1) & 0x8000)
								SetRotation(Target, AimLocation, EntityVisible);
						}
					}
				}
			}

    static void HandleTrader(SDK::ABP_MasterTrader_C* trader, SDK::APlayerController* PlayerController,
        float& ClosestDistance, SDK::ACharacter*& Target, SDK::FVector& AimLocation) {
        if (!trader || !trader->BP_AIComponent || trader->BP_AIComponent->Dead) return;

        auto MaxHealth = trader->BP_AIComponent->MaxHealth;
        auto Health = trader->BP_AIComponent->Health;
        const char* PlayerName = "Trader";
        bool EntityVisible = PlayerController->LineOfSightTo(trader, { 0.f,0.f,0.f }, false);

        SDK::FVector2D Head = Utils::BoneToScreenLocation(PlayerController, trader, skeleton::head);
        if (!Head.X || !Head.Y) return;

				SDK::FVector MyLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
        SDK::FVector TargetLocation = trader->K2_GetActorLocation();
        float distance = Utils::CalculateDistance(MyLocation, TargetLocation);

        DrawESP(trader, PlayerController,
            PlayerName,
            Health, MaxHealth, distance,
            c_menu::u_vars::AIShowName,
            c_menu::u_vars::AIShowHealth,
            c_menu::u_vars::AIShowDistance,
            c_menu::u_vars::AIEspSkeleton,
								c_menu::u_vars::AINameColor,
								c_menu::u_vars::AIDistanceColor,
            c_menu::u_vars::AISkeletonVisibleColor,
            c_menu::u_vars::AISkeletonHiddenColor,
            c_menu::u_vars::AIDirectionColor,
            c_menu::u_vars::AIMaxDistance
        );

        if (c_menu::u_vars::Aimbot) {
            float Distance = Utils::Distance2D(ScreenCenter, Head);
            if (Distance < ClosestDistance && Distance < c_menu::u_vars::FovRadius && distance <= c_menu::u_vars::AIMaxDistance) {
						static int boneId = skeleton::head;
                switch (c_menu::u_vars::AimBone) {
                case 0: boneId = skeleton::head; break;
                case 1: boneId = skeleton::spine_02; break;
                case 2: boneId = skeleton::Pelvis; break;
						}

						ClosestDistance = Distance;
                Target = trader;
                AimLocation = trader->Mesh->GetSocketLocation(trader->Mesh->GetBoneName(boneId));

                if (AimLocation.X && AimLocation.Y && AimLocation.Z) {
                    if (GetAsyncKeyState(VK_XBUTTON1) & 0x8000)
								SetRotation(Target, AimLocation, EntityVisible);
						}
					}
				}
			}

    static void HandleScavenger(SDK::ABP_MasterScavenger_C* scavenger, SDK::APlayerController* PlayerController,
        float& ClosestDistance, SDK::ACharacter*& Target, SDK::FVector& AimLocation) {
        if (!scavenger || !scavenger->BP_AIComponent || scavenger->BP_AIComponent->Dead) return;

        auto MaxHealth = scavenger->BP_AIComponent->MaxHealth;
        auto Health = scavenger->BP_AIComponent->Health;
        const char* PlayerName = "Scavenger";
        bool EntityVisible = PlayerController->LineOfSightTo(scavenger, { 0.f,0.f,0.f }, false);

        SDK::FVector2D Head = Utils::BoneToScreenLocation(PlayerController, scavenger, skeleton::head);
        if (!Head.X || !Head.Y) return;

				SDK::FVector MyLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
        SDK::FVector TargetLocation = scavenger->K2_GetActorLocation();
        float distance = Utils::CalculateDistance(MyLocation, TargetLocation);

        DrawESP(scavenger, PlayerController,
            PlayerName,
            Health, MaxHealth, distance,
            c_menu::u_vars::AIShowName,
            c_menu::u_vars::AIShowHealth,
            c_menu::u_vars::AIShowDistance,
            c_menu::u_vars::AIEspSkeleton,
								c_menu::u_vars::AINameColor,
								c_menu::u_vars::AIDistanceColor,
            c_menu::u_vars::AISkeletonVisibleColor,
            c_menu::u_vars::AISkeletonHiddenColor,
            c_menu::u_vars::AIDirectionColor,
            c_menu::u_vars::AIMaxDistance
        );

        if (c_menu::u_vars::Aimbot) {
            float Distance = Utils::Distance2D(ScreenCenter, Head);
            if (Distance < ClosestDistance && Distance < c_menu::u_vars::FovRadius && distance <= c_menu::u_vars::AIMaxDistance) {
						static int boneId = skeleton::head;
                switch (c_menu::u_vars::AimBone) {
                case 0: boneId = skeleton::head; break;
                case 1: boneId = skeleton::spine_02; break;
                case 2: boneId = skeleton::Pelvis; break;
						}

						ClosestDistance = Distance;
                Target = scavenger;
                AimLocation = scavenger->Mesh->GetSocketLocation(scavenger->Mesh->GetBoneName(boneId));

                if (AimLocation.X && AimLocation.Y && AimLocation.Z) {
                    if (GetAsyncKeyState(VK_XBUTTON1) & 0x8000)
								SetRotation(Target, AimLocation, EntityVisible);
						}
					}
				}
			}

    static void HandleCivilian(SDK::ABP_RandomCivilian_C* civilian, SDK::APlayerController* PlayerController,
        float& ClosestDistance, SDK::ACharacter*& Target, SDK::FVector& AimLocation) {
        if (!civilian || civilian->Dead) return;

        auto MaxHealth = 50.0f;
        auto Health = civilian->Health;
        const char* PlayerName = "Civilian";
        bool EntityVisible = PlayerController->LineOfSightTo(civilian, { 0.f,0.f,0.f }, false);

        SDK::FVector2D Head = Utils::BoneToScreenLocation(PlayerController, civilian, skeleton::head);
        if (!Head.X || !Head.Y) return;

				SDK::FVector MyLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
        SDK::FVector TargetLocation = civilian->K2_GetActorLocation();
        float distance = Utils::CalculateDistance(MyLocation, TargetLocation);

        DrawESP(civilian, PlayerController,
            PlayerName,
            Health, MaxHealth, distance,
            c_menu::u_vars::CivilianShowName,
            c_menu::u_vars::CivilianShowHealth,
            c_menu::u_vars::CivilianShowDistance,
            c_menu::u_vars::CivilianEspSkeleton,
								c_menu::u_vars::CivilianNameColor,
            c_menu::u_vars::CivilianDistanceColor,
            c_menu::u_vars::CivilianSkeletonVisibleColor,
            c_menu::u_vars::CivilianSkeletonHiddenColor,
            c_menu::u_vars::CivilianDirectionColor,
            c_menu::u_vars::CivilianMaxDistance
        );

        if (c_menu::u_vars::Aimbot) {
            float Distance = Utils::Distance2D(ScreenCenter, Head);
            if (Distance < ClosestDistance && Distance < c_menu::u_vars::FovRadius && distance <= c_menu::u_vars::CivilianMaxDistance) {
                static int boneId = skeleton::head;
                switch (c_menu::u_vars::AimBone) {
                case 0: boneId = skeleton::head; break;
                case 1: boneId = skeleton::spine_02; break;
                case 2: boneId = skeleton::Pelvis; break;
                }

                ClosestDistance = Distance;
                Target = civilian;
                AimLocation = civilian->Mesh->GetSocketLocation(civilian->Mesh->GetBoneName(boneId));

                if (AimLocation.X && AimLocation.Y && AimLocation.Z) {
                    if (GetAsyncKeyState(VK_XBUTTON1) & 0x8000)
                        SetRotation(Target, AimLocation, EntityVisible);
				}
			}
		}
	}
};
