#pragma once
#include "json.h"
#include "SDK/SDK.hpp"
#include <string>
#include <vector>
#include <filesystem>

namespace WaypointSystem {
    enum class WaypointIcon {
        None,
        Cross,
        Star,
        Circle,
        Square,
        Triangle,
        Diamond
    };

    static ImColor CreateImColor(float r, float g, float b, float a = 1.0f) {
        return ImColor(r, g, b, a);
    }

    // Helper function to create JSON value for ImColor
    static SimpleJSON::JSONValue ColorToJSON(const ImColor& color) {
        SimpleJSON::JSONValue colorObj;
        colorObj.type = SimpleJSON::JSONValue::Type::Object;
        
        SimpleJSON::JSONValue rValue;
        rValue.type = SimpleJSON::JSONValue::Type::Number;
        rValue.numberValue = color.Value.x;
        
        SimpleJSON::JSONValue gValue;
        gValue.type = SimpleJSON::JSONValue::Type::Number;
        gValue.numberValue = color.Value.y;
        
        SimpleJSON::JSONValue bValue;
        bValue.type = SimpleJSON::JSONValue::Type::Number;
        bValue.numberValue = color.Value.z;
        
        SimpleJSON::JSONValue aValue;
        aValue.type = SimpleJSON::JSONValue::Type::Number;
        aValue.numberValue = color.Value.w;
        
        colorObj.objectValues.push_back({"r", rValue});
        colorObj.objectValues.push_back({"g", gValue});
        colorObj.objectValues.push_back({"b", bValue});
        colorObj.objectValues.push_back({"a", aValue});
        
        return colorObj;
    }

    // Helper function to create ImColor from JSON
    static ImColor ColorFromJSON(const SimpleJSON::JSONValue& json) {
        float r = 1.0f, g = 1.0f, b = 1.0f, a = 1.0f;
        for (const auto& pair : json.objectValues) {
            if (pair.first == "r") r = pair.second.numberValue;
            else if (pair.first == "g") g = pair.second.numberValue;
            else if (pair.first == "b") b = pair.second.numberValue;
            else if (pair.first == "a") a = pair.second.numberValue;
        }
        return CreateImColor(r, g, b, a);
    }

    struct Waypoint {
        std::string name;
        SDK::FVector location;
        ImColor color;
        WaypointIcon icon;

        SimpleJSON::JSONValue toJSON() const {
            SimpleJSON::JSONValue obj;
            obj.type = SimpleJSON::JSONValue::Type::Object;
            
            SimpleJSON::JSONValue nameValue;
            nameValue.type = SimpleJSON::JSONValue::Type::String;
            nameValue.stringValue = name;
            obj.objectValues.push_back({"name", nameValue});
            
            SimpleJSON::JSONValue locationObj;
            locationObj.type = SimpleJSON::JSONValue::Type::Object;
            
            SimpleJSON::JSONValue xValue;
            xValue.type = SimpleJSON::JSONValue::Type::Number;
            xValue.numberValue = location.X;
            
            SimpleJSON::JSONValue yValue;
            yValue.type = SimpleJSON::JSONValue::Type::Number;
            yValue.numberValue = location.Y;
            
            SimpleJSON::JSONValue zValue;
            zValue.type = SimpleJSON::JSONValue::Type::Number;
            zValue.numberValue = location.Z;
            
            locationObj.objectValues.push_back({"x", xValue});
            locationObj.objectValues.push_back({"y", yValue});
            locationObj.objectValues.push_back({"z", zValue});
            obj.objectValues.push_back({"location", locationObj});
            
            obj.objectValues.push_back({"color", ColorToJSON(color)});
            
            SimpleJSON::JSONValue iconValue;
            iconValue.type = SimpleJSON::JSONValue::Type::Number;
            iconValue.numberValue = static_cast<double>(static_cast<int>(icon));
            obj.objectValues.push_back({"icon", iconValue});
            
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
                    wp.color = ColorFromJSON(pair.second);
                }
                else if (pair.first == "icon") {
                    wp.icon = static_cast<WaypointIcon>(static_cast<int>(pair.second.numberValue));
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
        static inline ImColor waypointColor = CreateImColor(1.0f, 1.0f, 0.0f, 1.0f);
        static inline bool showWaypoints = true;
        static inline float maxDistance = 1000.0f;
        static inline WaypointIcon currentIcon = WaypointIcon::None;

        static const char* GetIconName(WaypointIcon icon) {
            switch (icon) {
                case WaypointIcon::None: return "None";
                case WaypointIcon::Cross: return "Cross";
                case WaypointIcon::Star: return "Star";
                case WaypointIcon::Circle: return "Circle";
                case WaypointIcon::Square: return "Square";
                case WaypointIcon::Triangle: return "Triangle";
                case WaypointIcon::Diamond: return "Diamond";
                default: return "Unknown";
            }
        }

        static void DrawIcon(ImDrawList* drawList, const ImVec2& pos, WaypointIcon icon, float size, ImColor color) {
            switch (icon) {
                case WaypointIcon::Cross: {
                    // Draw cross shape
                    drawList->AddRectFilled(
                        ImVec2(pos.x - size/6, pos.y - size/2),
                        ImVec2(pos.x + size/6, pos.y + size/2),
                        color
                    );
                    drawList->AddRectFilled(
                        ImVec2(pos.x - size/2, pos.y - size/6),
                        ImVec2(pos.x + size/2, pos.y + size/6),
                        color
                    );
                    break;
                }
                case WaypointIcon::Star: {
                    const float PI = 3.14159265359f;
                    const int numPoints = 5;
                    ImVec2 points[10];
                    for (int i = 0; i < numPoints * 2; i++) {
                        float angle = i * PI / numPoints;
                        float radius = (i % 2 == 0) ? size/2 : size/4;
                        points[i] = ImVec2(
                            pos.x + radius * cos(angle),
                            pos.y + radius * sin(angle)
                        );
                    }
                    drawList->AddConvexPolyFilled(points, 10, color);
                    break;
                }
                case WaypointIcon::Circle:
                    drawList->AddCircleFilled(pos, size/2, color, 12);
                    break;
                case WaypointIcon::Square:
                    drawList->AddRectFilled(
                        ImVec2(pos.x - size/2, pos.y - size/2),
                        ImVec2(pos.x + size/2, pos.y + size/2),
                        color
                    );
                    break;
                case WaypointIcon::Triangle: {
                    drawList->AddTriangleFilled(
                        ImVec2(pos.x, pos.y - size/2),
                        ImVec2(pos.x - size/2, pos.y + size/2),
                        ImVec2(pos.x + size/2, pos.y + size/2),
                        color
                    );
                    break;
                }
                case WaypointIcon::Diamond: {
                    drawList->AddQuadFilled(
                        ImVec2(pos.x, pos.y - size/2),
                        ImVec2(pos.x + size/2, pos.y),
                        ImVec2(pos.x, pos.y + size/2),
                        ImVec2(pos.x - size/2, pos.y),
                        color
                    );
                    break;
                }
                default:
                    drawList->AddCircleFilled(pos, size/2, color, 12);
                    break;
            }
        }

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
            waypoints.push_back({waypointName, location, color, currentIcon});
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