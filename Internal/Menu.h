#pragma once
#include "json.h"
#include "Waypoint.h"

class c_menu {
public:
	static inline bool showMenu = false;
	union u_vars
	{
		// Debug ESP
		static inline bool DebugESP = false;
		static inline bool DebugShowAllActors = false;
		static inline bool DebugShowName = true;
		static inline bool DebugShowDistance = true;
		static inline float DebugMaxDistance = 15.0f;
		static inline ImColor DebugNameColor = ImColor(255, 255, 255);
		static inline ImColor DebugDistanceColor = ImColor(255, 255, 255);
		static inline bool Debug3DBones = false;

		// AI ESP (Military/Bandit)
		static inline bool AIEspSkeleton = true;
		static inline bool AIShowName = true;
		static inline bool AIShowHealth = true;
		static inline bool AIShowDistance = true;
		static inline bool AIShowDirection = true;
		static inline float AIMaxDistance = 100.0f;
		static inline ImColor AISkeletonVisibleColor = ImColor(0, 255, 0);
		static inline ImColor AISkeletonHiddenColor = ImColor(255, 0, 0);
		static inline ImColor AINameColor = ImColor(255, 255, 255);
		static inline ImColor AIDistanceColor = ImColor(255, 255, 255);
		static inline ImColor AIDirectionColor = ImColor(0, 255, 0);

		// Civilian ESP
		static inline bool CivilianEspSkeleton = true;
		static inline bool CivilianShowName = true;
		static inline bool CivilianShowHealth = true;
		static inline bool CivilianShowDistance = true;
		static inline bool CivilianShowDirection = true;
		static inline float CivilianMaxDistance = 100.0f;
		static inline ImColor CivilianSkeletonVisibleColor = ImColor(0, 255, 0);
		static inline ImColor CivilianSkeletonHiddenColor = ImColor(255, 0, 0);
		static inline ImColor CivilianNameColor = ImColor(255, 255, 255);
		static inline ImColor CivilianDistanceColor = ImColor(255, 255, 255);
		static inline ImColor CivilianDirectionColor = ImColor(0, 255, 0);

		// Trader ESP
		static inline bool TraderEspSkeleton = true;
		static inline bool TraderShowName = true;
		static inline bool TraderShowHealth = true;
		static inline bool TraderShowDistance = true;
		static inline bool TraderShowDirection = true;
		static inline float TraderMaxDistance = 100.0f;
		static inline ImColor TraderSkeletonVisibleColor = ImColor(0, 255, 0);
		static inline ImColor TraderSkeletonHiddenColor = ImColor(255, 0, 0);
		static inline ImColor TraderNameColor = ImColor(255, 255, 255);
		static inline ImColor TraderDistanceColor = ImColor(255, 255, 255);
		static inline ImColor TraderDirectionColor = ImColor(0, 255, 0);

		// Zombie ESP
		static inline bool ZombieEspSkeleton = true;
		static inline bool ZombieShowName = true;
		static inline bool ZombieShowHealth = true;
		static inline bool ZombieShowDistance = true;
		static inline bool ZombieShowDirection = true;
		static inline float ZombieMaxDistance = 100.0f;
		static inline ImColor ZombieSkeletonVisibleColor = ImColor(0, 255, 0);
		static inline ImColor ZombieSkeletonHiddenColor = ImColor(255, 0, 0);
		static inline ImColor ZombieNameColor = ImColor(255, 255, 255);
		static inline ImColor ZombieDistanceColor = ImColor(255, 255, 255);
		static inline ImColor ZombieDirectionColor = ImColor(0, 255, 0);

		// Boss ESP
		static inline bool BossEspSkeleton = true;
		static inline bool BossShowName = true;
		static inline bool BossShowHealth = true;
		static inline bool BossShowDistance = true;
		static inline bool BossShowDirection = true;
		static inline float BossMaxDistance = 150.0f;
		static inline ImColor BossSkeletonVisibleColor = ImColor(255, 0, 255);
		static inline ImColor BossSkeletonHiddenColor = ImColor(255, 0, 0);
		static inline ImColor BossNameColor = ImColor(255, 255, 255);
		static inline ImColor BossDistanceColor = ImColor(255, 255, 255);
		static inline ImColor BossDirectionColor = ImColor(255, 0, 255);

		// Player ESP
		static inline bool PlayerEspSkeleton = true;
		static inline bool PlayerShowName = true;
		static inline bool PlayerShowHealth = true;
		static inline bool PlayerShowDistance = true;
		static inline bool PlayerShowDirection = true;
		static inline float PlayerMaxDistance = 100.0f;
		static inline ImColor PlayerSkeletonVisibleColor = ImColor(0, 255, 0);
		static inline ImColor PlayerSkeletonHiddenColor = ImColor(255, 0, 0);
		static inline ImColor PlayerNameColor = ImColor(255, 255, 255);
		static inline ImColor PlayerDistanceColor = ImColor(255, 255, 255);
		static inline ImColor PlayerDirectionColor = ImColor(0, 255, 0);

		// Item ESP
		static inline bool ItemShowName = false;
		static inline bool ItemShowDistance = false;
		static inline float ItemMaxDistance = 100.0f;
		static inline ImColor ItemNameColor = ImColor(255, 255, 0);
		static inline ImColor ItemDistanceColor = ImColor(255, 255, 255);

		// Container ESP
		static inline bool ContainerShowName = false;
		static inline bool ContainerShowDistance = false;
		static inline float ContainerMaxDistance = 100.0f;
		static inline ImColor ContainerNameColor = ImColor(255, 255, 0);
		static inline ImColor ContainerDistanceColor = ImColor(255, 255, 255);

		static inline bool SilentAim = false;
		static inline bool Aimbot = true;
		static inline float FovRadius = 120.f;
		static inline bool VisCheck = true;

		static inline bool InfStamina = true;
		static inline bool NoDrain = false;
		static inline bool GodMode = false;

		static inline bool NoRecoil = true;
		static inline bool FullAuto = false;
		static inline bool CustomFireRate = false;
		static inline float FireRate = 15.0f;
		static inline bool InfAmmo = false;

		static inline bool InstaLoot = false;
		static inline bool InfLockPick = false;

		static inline bool SpeedHack = false;
		static inline float Speed = 1.0f;

		static inline bool DumpImages = false;

		static inline const char* BoneList[] = { "Head", "Body", "Pelvis" };
		static inline int AimBone = 0;
	};

	static void Tick()
	{
		if (showMenu)
		{
			// Set window size and position
			ImGui::SetNextWindowSize(ImVec2(898, 550), ImGuiCond_FirstUseEver);
			ImGui::SetNextWindowPos(ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f), ImGuiCond_FirstUseEver, ImVec2(0.5f, 0.5f));

			// Custom style
			ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(15, 15));
			ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(5, 5));
			ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(12, 8));
			ImGui::PushStyleVar(ImGuiStyleVar_ItemInnerSpacing, ImVec2(8, 6));
			ImGui::PushStyleVar(ImGuiStyleVar_IndentSpacing, 25.0f);
			ImGui::PushStyleVar(ImGuiStyleVar_ScrollbarSize, 15.0f);
			ImGui::PushStyleVar(ImGuiStyleVar_GrabMinSize, 5.0f);

			// Colors
			ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0.06f, 0.06f, 0.06f, 0.94f));
			ImGui::PushStyleColor(ImGuiCol_Header, ImVec4(0.20f, 0.20f, 0.20f, 1.00f));
			ImGui::PushStyleColor(ImGuiCol_HeaderHovered, ImVec4(0.26f, 0.26f, 0.26f, 1.00f));
			ImGui::PushStyleColor(ImGuiCol_HeaderActive, ImVec4(0.30f, 0.30f, 0.30f, 1.00f));
			ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0.20f, 0.20f, 0.20f, 1.00f));
			ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(0.26f, 0.26f, 0.26f, 1.00f));
			ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(0.30f, 0.30f, 0.30f, 1.00f));
			ImGui::PushStyleColor(ImGuiCol_FrameBg, ImVec4(0.20f, 0.20f, 0.20f, 1.00f));
			ImGui::PushStyleColor(ImGuiCol_FrameBgHovered, ImVec4(0.26f, 0.26f, 0.26f, 1.00f));
			ImGui::PushStyleColor(ImGuiCol_FrameBgActive, ImVec4(0.30f, 0.30f, 0.30f, 1.00f));
			ImGui::PushStyleColor(ImGuiCol_Tab, ImVec4(0.20f, 0.20f, 0.20f, 1.00f));
			ImGui::PushStyleColor(ImGuiCol_TabHovered, ImVec4(0.26f, 0.26f, 0.26f, 1.00f));
			ImGui::PushStyleColor(ImGuiCol_TabActive, ImVec4(0.30f, 0.30f, 0.30f, 1.00f));
			ImGui::PushStyleColor(ImGuiCol_TitleBg, ImVec4(0.20f, 0.20f, 0.20f, 1.00f));
			ImGui::PushStyleColor(ImGuiCol_TitleBgActive, ImVec4(0.30f, 0.30f, 0.30f, 1.00f));
			ImGui::PushStyleColor(ImGuiCol_CheckMark, ImVec4(0.00f, 0.80f, 0.00f, 1.00f));
			ImGui::PushStyleColor(ImGuiCol_SliderGrab, ImVec4(0.00f, 0.80f, 0.00f, 1.00f));
			ImGui::PushStyleColor(ImGuiCol_SliderGrabActive, ImVec4(0.00f, 0.90f, 0.00f, 1.00f));
			ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0.90f, 0.90f, 0.90f, 1.00f));
			ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0.30f, 0.30f, 0.30f, 1.00f));
			ImGui::PushStyleColor(ImGuiCol_BorderShadow, ImVec4(0.00f, 0.00f, 0.00f, 0.00f));

			ImGui::Begin("SurrounDead Internal", &showMenu, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings);
			{
				if (ImGui::BeginTabBar("MainTabs", ImGuiTabBarFlags_FittingPolicyScroll))
				{
					if (ImGui::BeginTabItem("ESP"))
					{
						if (ImGui::BeginTabBar("ESPTabs", ImGuiTabBarFlags_FittingPolicyScroll))
						{
							if (ImGui::BeginTabItem("AI ESP"))
							{
								ImGui::BeginGroup();
								{
									ImGui::Checkbox("Enable Skeleton", &u_vars::AIEspSkeleton);
									ImGui::Checkbox("Show Name", &u_vars::AIShowName);
									ImGui::Checkbox("Show Health", &u_vars::AIShowHealth);
									ImGui::Checkbox("Show Distance", &u_vars::AIShowDistance);
									ImGui::Checkbox("Show Direction", &u_vars::AIShowDirection);
									ImGui::SliderFloat("Max Distance##AI", &u_vars::AIMaxDistance, 10.0f, 500.0f, "%.1fm");
								}
								ImGui::EndGroup();
								ImGui::EndTabItem();
							}

							if (ImGui::BeginTabItem("Civilian ESP"))
							{
								ImGui::BeginGroup();
								{
									ImGui::Checkbox("Enable Skeleton##Civilian", &u_vars::CivilianEspSkeleton);
									ImGui::Checkbox("Show Name##Civilian", &u_vars::CivilianShowName);
									ImGui::Checkbox("Show Health##Civilian", &u_vars::CivilianShowHealth);
									ImGui::Checkbox("Show Distance##Civilian", &u_vars::CivilianShowDistance);
									ImGui::Checkbox("Show Direction##Civilian", &u_vars::CivilianShowDirection);
									ImGui::SliderFloat("Max Distance##Civilian", &u_vars::CivilianMaxDistance, 10.0f, 500.0f, "%.1fm");
								}
								ImGui::EndGroup();
								ImGui::EndTabItem();
							}

							if (ImGui::BeginTabItem("Trader ESP"))
							{
								ImGui::BeginGroup();
								{
									ImGui::Checkbox("Enable Skeleton##Trader", &u_vars::TraderEspSkeleton);
									ImGui::Checkbox("Show Name##Trader", &u_vars::TraderShowName);
									ImGui::Checkbox("Show Health##Trader", &u_vars::TraderShowHealth);
									ImGui::Checkbox("Show Distance##Trader", &u_vars::TraderShowDistance);
									ImGui::Checkbox("Show Direction##Trader", &u_vars::TraderShowDirection);
									ImGui::SliderFloat("Max Distance##Trader", &u_vars::TraderMaxDistance, 10.0f, 500.0f, "%.1fm");
								}
								ImGui::EndGroup();
								ImGui::EndTabItem();
							}

							if (ImGui::BeginTabItem("Zombie ESP"))
							{
								ImGui::BeginGroup();
								{
									ImGui::Checkbox("Enable Skeleton##Zombie", &u_vars::ZombieEspSkeleton);
									ImGui::Checkbox("Show Name##Zombie", &u_vars::ZombieShowName);
									ImGui::Checkbox("Show Health##Zombie", &u_vars::ZombieShowHealth);
									ImGui::Checkbox("Show Distance##Zombie", &u_vars::ZombieShowDistance);
									ImGui::Checkbox("Show Direction##Zombie", &u_vars::ZombieShowDirection);
									ImGui::SliderFloat("Max Distance##Zombie", &u_vars::ZombieMaxDistance, 10.0f, 500.0f, "%.1fm");
								}
								ImGui::EndGroup();
								ImGui::EndTabItem();
							}

							if (ImGui::BeginTabItem("Boss ESP"))
							{
								ImGui::BeginGroup();
								{
									ImGui::Checkbox("Enable Skeleton##Boss", &u_vars::BossEspSkeleton);
									ImGui::Checkbox("Show Name##Boss", &u_vars::BossShowName);
									ImGui::Checkbox("Show Health##Boss", &u_vars::BossShowHealth);
									ImGui::Checkbox("Show Distance##Boss", &u_vars::BossShowDistance);
									ImGui::Checkbox("Show Direction##Boss", &u_vars::BossShowDirection);
									ImGui::SliderFloat("Max Distance##Boss", &u_vars::BossMaxDistance, 10.0f, 500.0f, "%.1fm");
								}
								ImGui::EndGroup();
								ImGui::EndTabItem();
							}

							if (ImGui::BeginTabItem("Player ESP"))
							{
								ImGui::BeginGroup();
								{
									ImGui::Checkbox("Enable Skeleton##Player", &u_vars::PlayerEspSkeleton);
									ImGui::Checkbox("Show Name##Player", &u_vars::PlayerShowName);
									ImGui::Checkbox("Show Health##Player", &u_vars::PlayerShowHealth);
									ImGui::Checkbox("Show Distance##Player", &u_vars::PlayerShowDistance);
									ImGui::Checkbox("Show Direction##Player", &u_vars::PlayerShowDirection);
									ImGui::SliderFloat("Max Distance##Player", &u_vars::PlayerMaxDistance, 10.0f, 500.0f, "%.1fm");
								}
								ImGui::EndGroup();
								ImGui::EndTabItem();
							}

							ImGui::EndTabBar();
						}
						ImGui::EndTabItem();
					}

					if (ImGui::BeginTabItem("Colors"))
					{
						if (ImGui::BeginTabBar("ColorTabs", ImGuiTabBarFlags_FittingPolicyScroll))
						{
							if (ImGui::BeginTabItem("AI Colors"))
							{
								ImGui::BeginGroup();
								{
									ImGui::Text("Skeleton");
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.3f);
									ImGui::Text("Visible");
									ImGui::SameLine();
									ImGui::ColorEdit4("##AISkeletonVisible", (float*)&u_vars::AISkeletonVisibleColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.6f);
									ImGui::Text("Hidden");
									ImGui::SameLine();
									ImGui::ColorEdit4("##AISkeletonHidden", (float*)&u_vars::AISkeletonHiddenColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

									ImGui::Text("Name");
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.3f);
									ImGui::ColorEdit4("##AIName", (float*)&u_vars::AINameColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

									ImGui::Text("Distance");
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.3f);
									ImGui::ColorEdit4("##AIDistance", (float*)&u_vars::AIDistanceColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

									ImGui::Text("Direction");
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.3f);
									ImGui::ColorEdit4("##AIDirection", (float*)&u_vars::AIDirectionColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);
								}
								ImGui::EndGroup();
								ImGui::EndTabItem();
							}

							if (ImGui::BeginTabItem("Civilian Colors"))
							{
								ImGui::BeginGroup();
								{
									ImGui::Text("Skeleton");
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.3f);
									ImGui::Text("Visible");
									ImGui::SameLine();
									ImGui::ColorEdit4("##CivilianSkeletonVisible", (float*)&u_vars::CivilianSkeletonVisibleColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.6f);
									ImGui::Text("Hidden");
									ImGui::SameLine();
									ImGui::ColorEdit4("##CivilianSkeletonHidden", (float*)&u_vars::CivilianSkeletonHiddenColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

									ImGui::Text("Name");
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.3f);
									ImGui::ColorEdit4("##CivilianName", (float*)&u_vars::CivilianNameColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

									ImGui::Text("Distance");
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.3f);
									ImGui::ColorEdit4("##CivilianDistance", (float*)&u_vars::CivilianDistanceColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

									ImGui::Text("Direction");
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.3f);
									ImGui::ColorEdit4("##CivilianDirection", (float*)&u_vars::CivilianDirectionColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);
								}
								ImGui::EndGroup();
								ImGui::EndTabItem();
							}

							if (ImGui::BeginTabItem("Trader Colors"))
							{
								ImGui::BeginGroup();
								{
									ImGui::Text("Skeleton");
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.3f);
									ImGui::Text("Visible");
									ImGui::SameLine();
									ImGui::ColorEdit4("##TraderSkeletonVisible", (float*)&u_vars::TraderSkeletonVisibleColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.6f);
									ImGui::Text("Hidden");
									ImGui::SameLine();
									ImGui::ColorEdit4("##TraderSkeletonHidden", (float*)&u_vars::TraderSkeletonHiddenColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

									ImGui::Text("Name");
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.3f);
									ImGui::ColorEdit4("##TraderName", (float*)&u_vars::TraderNameColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

									ImGui::Text("Distance");
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.3f);
									ImGui::ColorEdit4("##TraderDistance", (float*)&u_vars::TraderDistanceColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

									ImGui::Text("Direction");
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.3f);
									ImGui::ColorEdit4("##TraderDirection", (float*)&u_vars::TraderDirectionColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);
								}
								ImGui::EndGroup();
								ImGui::EndTabItem();
							}

							if (ImGui::BeginTabItem("Zombie Colors"))
							{
								ImGui::BeginGroup();
								{
									ImGui::Text("Skeleton");
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.3f);
									ImGui::Text("Visible");
									ImGui::SameLine();
									ImGui::ColorEdit4("##ZombieSkeletonVisible", (float*)&u_vars::ZombieSkeletonVisibleColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.6f);
									ImGui::Text("Hidden");
									ImGui::SameLine();
									ImGui::ColorEdit4("##ZombieSkeletonHidden", (float*)&u_vars::ZombieSkeletonHiddenColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

									ImGui::Text("Name");
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.3f);
									ImGui::ColorEdit4("##ZombieName", (float*)&u_vars::ZombieNameColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

									ImGui::Text("Distance");
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.3f);
									ImGui::ColorEdit4("##ZombieDistance", (float*)&u_vars::ZombieDistanceColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

									ImGui::Text("Direction");
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.3f);
									ImGui::ColorEdit4("##ZombieDirection", (float*)&u_vars::ZombieDirectionColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);
								}
								ImGui::EndGroup();
								ImGui::EndTabItem();
							}

							if (ImGui::BeginTabItem("Boss Colors"))
							{
								ImGui::BeginGroup();
								{
									ImGui::Text("Skeleton");
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.3f);
									ImGui::Text("Visible");
									ImGui::SameLine();
									ImGui::ColorEdit4("##BossSkeletonVisible", (float*)&u_vars::BossSkeletonVisibleColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.6f);
									ImGui::Text("Hidden");
									ImGui::SameLine();
									ImGui::ColorEdit4("##BossSkeletonHidden", (float*)&u_vars::BossSkeletonHiddenColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

									ImGui::Text("Name");
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.3f);
									ImGui::ColorEdit4("##BossName", (float*)&u_vars::BossNameColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

									ImGui::Text("Distance");
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.3f);
									ImGui::ColorEdit4("##BossDistance", (float*)&u_vars::BossDistanceColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

									ImGui::Text("Direction");
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.3f);
									ImGui::ColorEdit4("##BossDirection", (float*)&u_vars::BossDirectionColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);
								}
								ImGui::EndGroup();
								ImGui::EndTabItem();
							}

							if (ImGui::BeginTabItem("Player Colors"))
							{
								ImGui::BeginGroup();
								{
									ImGui::Text("Skeleton");
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.3f);
									ImGui::Text("Visible");
									ImGui::SameLine();
									ImGui::ColorEdit4("##PlayerSkeletonVisible", (float*)&u_vars::PlayerSkeletonVisibleColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.6f);
									ImGui::Text("Hidden");
									ImGui::SameLine();
									ImGui::ColorEdit4("##PlayerSkeletonHidden", (float*)&u_vars::PlayerSkeletonHiddenColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

									ImGui::Text("Name");
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.3f);
									ImGui::ColorEdit4("##PlayerName", (float*)&u_vars::PlayerNameColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

									ImGui::Text("Distance");
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.3f);
									ImGui::ColorEdit4("##PlayerDistance", (float*)&u_vars::PlayerDistanceColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

									ImGui::Text("Direction");
									ImGui::SameLine(ImGui::GetWindowWidth() * 0.3f);
									ImGui::ColorEdit4("##PlayerDirection", (float*)&u_vars::PlayerDirectionColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);
								}
								ImGui::EndGroup();
								ImGui::EndTabItem();
							}

							ImGui::EndTabBar();
						}
						ImGui::EndTabItem();
					}

					if (ImGui::BeginTabItem("Aim"))
					{
						ImGui::BeginGroup();
						{
							ImGui::Checkbox("Enable Aimbot", &u_vars::Aimbot);
							if (u_vars::Aimbot)
							{
								ImGui::Checkbox("Visibility Check", &u_vars::VisCheck);
								ImGui::SliderFloat("FOV Radius", &u_vars::FovRadius, 10.0f, 500.0f, "%.1f");
								ImGui::ListBox("Aim Bone", &u_vars::AimBone, u_vars::BoneList, sizeof(u_vars::BoneList) / sizeof(u_vars::BoneList[0]));
							}
						}
						ImGui::EndGroup();
						ImGui::EndTabItem();
					}

					if (ImGui::BeginTabItem("Player"))
					{
						ImGui::BeginGroup();
						{
							ImGui::Checkbox("Infinite Stmaina", &u_vars::InfStamina);
							ImGui::Checkbox("GodMode", &u_vars::GodMode);
							ImGui::Checkbox("Infinite Staturation", &u_vars::NoDrain);
							ImGui::Checkbox("No Recoil", &u_vars::NoRecoil);
							ImGui::Checkbox("Full Auto", &u_vars::FullAuto);
							//ImGui::Checkbox("Infinite Ammo", &u_vars::InfAmmo);
							ImGui::Checkbox("No Lockpick Break", &u_vars::InfLockPick);
							ImGui::Checkbox("SpeedHack", &u_vars::SpeedHack);
							if (u_vars::SpeedHack)
								ImGui::SliderFloat("Speed", &u_vars::Speed, 0.1f, 10.0f, "%.1f");
						}
						ImGui::EndGroup();
						ImGui::EndTabItem();
					}

					if (ImGui::BeginTabItem("Debug"))
					{
						ImGui::BeginGroup();
						{
							ImGui::Checkbox("Debug ESP", &u_vars::DebugESP);
							ImGui::Checkbox("Show All Actors", &u_vars::DebugShowAllActors);
							ImGui::Checkbox("3D Bones (slight Performance Hit)", &u_vars::Debug3DBones);
							ImGui::SliderFloat("Max Distance##Debug", &u_vars::DebugMaxDistance, 10.0f, 500.0f, "%.1fm");
						}
						ImGui::EndGroup();
						ImGui::EndTabItem();
					}

					if (ImGui::BeginTabItem("Waypoints"))
					{
						ImGui::BeginGroup();
						{
							ImGui::Checkbox("Show Waypoints", &WaypointSystem::WaypointManager::showWaypoints);
							
							ImGui::Separator();
							ImGui::Text("Waypoint Settings");
							ImGui::SliderFloat("Max Distance##Waypoints", &WaypointSystem::WaypointManager::maxDistance, 100.0f, 10000.0f, "%.1fm");
							
							ImGui::Separator();
							ImGui::Text("Create Waypoint");
							ImGui::InputText("Waypoint Name", WaypointSystem::WaypointManager::waypointName, sizeof(WaypointSystem::WaypointManager::waypointName));
							ImGui::ColorEdit4("Waypoint Color", (float*)&WaypointSystem::WaypointManager::waypointColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);
							
							ImGui::BeginGroup();
							{
								if (ImGui::Button("Save Current Position")) {
									SDK::UWorld* Gworld = SDK::UWorld::GetWorld();
									if (Gworld && Gworld->OwningGameInstance && Gworld->OwningGameInstance->LocalPlayers[0]) {
										auto PlayerController = Gworld->OwningGameInstance->LocalPlayers[0]->PlayerController;
										if (PlayerController && PlayerController->AcknowledgedPawn) {
											SDK::FVector location = PlayerController->AcknowledgedPawn->K2_GetActorLocation();
											WaypointSystem::WaypointManager::AddWaypoint(
												WaypointSystem::WaypointManager::waypointName,
												location,
												WaypointSystem::WaypointManager::waypointColor
											);
											memset(WaypointSystem::WaypointManager::waypointName, 0, sizeof(WaypointSystem::WaypointManager::waypointName));
										}
									}
								}
								ImGui::SameLine();
								if (ImGui::Button("Refresh Waypoints")) {
									WaypointSystem::WaypointManager::LoadWaypoints();
								}
							}
							ImGui::EndGroup();

							ImGui::Separator();
							ImGui::Text("Saved Waypoints");
							
							if (ImGui::BeginListBox("##WaypointList", ImVec2(-1, 200))) {
								for (int i = 0; i < WaypointSystem::WaypointManager::waypoints.size(); i++) {
									const bool isSelected = (WaypointSystem::WaypointManager::selectedWaypoint == i);
									if (ImGui::Selectable(WaypointSystem::WaypointManager::waypoints[i].name.c_str(), isSelected)) {
										WaypointSystem::WaypointManager::selectedWaypoint = i;
									}
								}
								ImGui::EndListBox();
							}

							if (WaypointSystem::WaypointManager::selectedWaypoint >= 0 && 
								WaypointSystem::WaypointManager::selectedWaypoint < WaypointSystem::WaypointManager::waypoints.size()) {
								ImGui::Separator();
								ImGui::Text("Edit Selected Waypoint");
								
								char editName[128];
								strcpy_s(editName, WaypointSystem::WaypointManager::waypoints[WaypointSystem::WaypointManager::selectedWaypoint].name.c_str());
								if (ImGui::InputText("##EditName", editName, sizeof(editName), ImGuiInputTextFlags_EnterReturnsTrue)) {
									WaypointSystem::WaypointManager::waypoints[WaypointSystem::WaypointManager::selectedWaypoint].name = editName;
									WaypointSystem::WaypointManager::SaveWaypoints();
								}
								
								if (ImGui::ColorEdit4("##EditColor", 
									(float*)&WaypointSystem::WaypointManager::waypoints[WaypointSystem::WaypointManager::selectedWaypoint].color, 
									ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar)) {
									WaypointSystem::WaypointManager::SaveWaypoints();
								}

								ImGui::BeginGroup();
								{
									if (ImGui::Button("Teleport to Selected")) {
										WaypointSystem::WaypointManager::TeleportToWaypoint(WaypointSystem::WaypointManager::selectedWaypoint);
									}
									ImGui::SameLine();
									if (ImGui::Button("Delete Selected")) {
										WaypointSystem::WaypointManager::DeleteWaypoint(WaypointSystem::WaypointManager::selectedWaypoint);
										WaypointSystem::WaypointManager::selectedWaypoint = -1;
									}
								}
								ImGui::EndGroup();
							}
						}
						ImGui::EndGroup();
						ImGui::EndTabItem();
					}

					if (ImGui::BeginTabItem("Credits"))
					{
						ImGui::BeginGroup();
						{
							ImGui::Text("SurrounDead Internal");
							ImGui::Text("Developer: DarkForm");
							ImGui::Text("Version: 2.3");
						}
						ImGui::EndGroup();
						ImGui::EndTabItem();
					}

					ImGui::EndTabBar();
				}

				ImGui::PopStyleColor(17);
				ImGui::PopStyleVar(6);
			}
			ImGui::End();
		}
	}
};
