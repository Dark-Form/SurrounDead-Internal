#pragma once
#include "json.h"
#include "SDK/SDK.hpp"
#include <string>
#include <vector>
#include <filesystem>

namespace WaypointSystem {
    struct Waypoint {
        std::string name;
        SDK::FVector location;
        ImColor color;

        SimpleJSON::JSONValue toJSON() const {
            SimpleJSON::JSONValue obj;
            obj.type = SimpleJSON::JSONValue::Type::Object;
            obj.objectValues.push_back({"name", SimpleJSON::JSONValue(name)});
            
            SimpleJSON::JSONValue locationObj;
            locationObj.type = SimpleJSON::JSONValue::Type::Object;
            locationObj.objectValues = {
                {"x", SimpleJSON::JSONValue(location.X)},
                {"y", SimpleJSON::JSONValue(location.Y)},
                {"z", SimpleJSON::JSONValue(location.Z)}
            };
            obj.objectValues.push_back({"location", locationObj});
            
            SimpleJSON::JSONValue colorObj;
            colorObj.type = SimpleJSON::JSONValue::Type::Object;
            colorObj.objectValues = {
                {"r", SimpleJSON::JSONValue(color.Value.x)},
                {"g", SimpleJSON::JSONValue(color.Value.y)},
                {"b", SimpleJSON::JSONValue(color.Value.z)},
                {"a", SimpleJSON::JSONValue(color.Value.w)}
            };
            obj.objectValues.push_back({"color", colorObj});
            
            return obj;
        }

        static Waypoint fromJSON(const SimpleJSON::JSONValue& json) {
            Waypoint wp;
            for (const auto& pair : json.objectValues) {
                if (pair.first == "name") {
                    wp.name = pair.second.stringValue;
                }
                else if (pair.first == "location") {
                    for (const auto& locPair : pair.second.objectValues) {
                        if (locPair.first == "x") wp.location.X = locPair.second.numberValue;
                        else if (locPair.first == "y") wp.location.Y = locPair.second.numberValue;
                        else if (locPair.first == "z") wp.location.Z = locPair.second.numberValue;
                    }
                }
                else if (pair.first == "color") {
                    for (const auto& colorPair : pair.second.objectValues) {
                        if (colorPair.first == "r") wp.color.Value.x = colorPair.second.numberValue;
                        else if (colorPair.first == "g") wp.color.Value.y = colorPair.second.numberValue;
                        else if (colorPair.first == "b") wp.color.Value.z = colorPair.second.numberValue;
                        else if (colorPair.first == "a") wp.color.Value.w = colorPair.second.numberValue;
                    }
                }
            }
            return wp;
        }
    };

    class WaypointManager {
    public:
        static inline std::vector<Waypoint> waypoints;
        static inline char waypointName[128] = "";
        static inline int selectedWaypoint = -1;
        static inline ImColor waypointColor = ImColor(255, 255, 0, 255);
        static inline bool showWaypoints = true;
        static inline float maxDistance = 1000.0f; // Default to 1000m

        static void SaveWaypoints() {
            std::filesystem::create_directory("waypoints");
            SimpleJSON::JSONValue json;
            json.type = SimpleJSON::JSONValue::Type::Array;
            for (const auto& wp : waypoints) {
                json.arrayValues.push_back(wp.toJSON());
            }
            SimpleJSON::saveToFile("waypoints/waypoints.json", json);
        }

        static void LoadWaypoints() {
            auto json = SimpleJSON::loadFromFile("waypoints/waypoints.json");
            if (json.type == SimpleJSON::JSONValue::Type::Array) {
                waypoints.clear();
                for (const auto& wpJson : json.arrayValues) {
                    waypoints.push_back(Waypoint::fromJSON(wpJson));
                }
            }
        }

        static void AddWaypoint(const std::string& name, const SDK::FVector& location, const ImColor& color) {
            std::string waypointName = name;
            if (waypointName.empty() || waypointName.find_first_not_of(' ') == std::string::npos) {
                waypointName = "Unknown";
            }
            waypoints.push_back({waypointName, location, color});
            SaveWaypoints();
        }

        static void DeleteWaypoint(int index) {
            if (index >= 0 && index < waypoints.size()) {
                waypoints.erase(waypoints.begin() + index);
                SaveWaypoints();
            }
        }

        static void TeleportToWaypoint(int index) {
            if (index >= 0 && index < waypoints.size()) {
                SDK::UWorld* Gworld = SDK::UWorld::GetWorld();
                if (Gworld && Gworld->OwningGameInstance && Gworld->OwningGameInstance->LocalPlayers[0]) {
                    auto PlayerController = Gworld->OwningGameInstance->LocalPlayers[0]->PlayerController;
                    if (PlayerController && PlayerController->AcknowledgedPawn) {
                        PlayerController->AcknowledgedPawn->K2_SetActorLocation(waypoints[index].location, false, nullptr, true);
                    }
                }
            }
        }
    };
} 