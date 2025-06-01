#pragma once

class c_menu {
public:
	static inline bool showMenu = false;
	union u_vars
	{
		// Debug ESP
		static inline bool DebugESP = false;
		static inline bool DebugShowName = true;
		static inline bool DebugShowDistance = true;
		static inline float DebugMaxDistance = 15.0f;
		static inline ImColor DebugNameColor = ImColor(255, 255, 255);
		static inline ImColor DebugDistanceColor = ImColor(255, 255, 255);

		// AI ESP (Military/Bandit)
		static inline bool AIEspSkeleton = true;
		static inline bool AIShowName = true;
		static inline bool AIShowHealth = true;
		static inline bool AIShowDistance = true;
		static inline float AIMaxDistance = 100.0f;
		static inline ImColor AISkeletonVisibleColor = ImColor(0, 255, 0);
		static inline ImColor AISkeletonHiddenColor = ImColor(255, 0, 0);
		static inline ImColor AINameColor = ImColor(255, 255, 255);
		static inline ImColor AIDistanceColor = ImColor(255, 255, 255);

		// Civilian ESP
		static inline bool CivilianEspSkeleton = true;
		static inline bool CivilianShowName = true;
		static inline bool CivilianShowHealth = true;
		static inline bool CivilianShowDistance = true;
		static inline float CivilianMaxDistance = 100.0f;
		static inline ImColor CivilianSkeletonVisibleColor = ImColor(0, 255, 0);
		static inline ImColor CivilianSkeletonHiddenColor = ImColor(255, 0, 0);
		static inline ImColor CivilianNameColor = ImColor(255, 255, 255);
		static inline ImColor CivilianDistanceColor = ImColor(255, 255, 255);

		// Trader ESP
		static inline bool TraderEspSkeleton = true;
		static inline bool TraderShowName = true;
		static inline bool TraderShowHealth = true;
		static inline bool TraderShowDistance = true;
		static inline float TraderMaxDistance = 100.0f;
		static inline ImColor TraderSkeletonVisibleColor = ImColor(0, 255, 0);
		static inline ImColor TraderSkeletonHiddenColor = ImColor(255, 0, 0);
		static inline ImColor TraderNameColor = ImColor(255, 255, 255);
		static inline ImColor TraderDistanceColor = ImColor(255, 255, 255);

		// Zombie ESP
		static inline bool ZombieEspSkeleton = true;
		static inline bool ZombieShowName = true;
		static inline bool ZombieShowHealth = true;
		static inline bool ZombieShowDistance = true;
		static inline float ZombieMaxDistance = 100.0f;
		static inline ImColor ZombieSkeletonVisibleColor = ImColor(0, 255, 0);
		static inline ImColor ZombieSkeletonHiddenColor = ImColor(255, 0, 0);
		static inline ImColor ZombieNameColor = ImColor(255, 255, 255);
		static inline ImColor ZombieDistanceColor = ImColor(255, 255, 255);

		// Boss ESP
		static inline bool BossEspSkeleton = true;
		static inline bool BossShowName = true;
		static inline bool BossShowHealth = true;
		static inline bool BossShowDistance = true;
		static inline float BossMaxDistance = 150.0f;
		static inline ImColor BossSkeletonVisibleColor = ImColor(255, 0, 255);
		static inline ImColor BossSkeletonHiddenColor = ImColor(255, 0, 0);
		static inline ImColor BossNameColor = ImColor(255, 255, 255);
		static inline ImColor BossDistanceColor = ImColor(255, 255, 255);

		// Player ESP
		static inline bool PlayerEspSkeleton = true;
		static inline bool PlayerShowName = true;
		static inline bool PlayerShowHealth = true;
		static inline bool PlayerShowDistance = true;
		static inline float PlayerMaxDistance = 100.0f;
		static inline ImColor PlayerSkeletonVisibleColor = ImColor(0, 255, 0);
		static inline ImColor PlayerSkeletonHiddenColor = ImColor(255, 0, 0);
		static inline ImColor PlayerNameColor = ImColor(255, 255, 255);
		static inline ImColor PlayerDistanceColor = ImColor(255, 255, 255);

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

		static inline bool NoRecoil = false;
		static inline bool InfAmmo = false;
		static inline bool InstaKill = false;

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
							ImGui::Text("Version: 1.2");
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
