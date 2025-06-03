#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <filesystem>

namespace SimpleJSON {
    struct JSONValue {
        enum class Type {
            String,
            Number,
            Boolean,
            Object,
            Array,
            Null
        };

        Type type;
        std::string stringValue;
        double numberValue;
        bool boolValue;
        std::vector<std::pair<std::string, JSONValue>> objectValues;
        std::vector<JSONValue> arrayValues;

        JSONValue() : type(Type::Null) {}
        JSONValue(const std::string& str) : type(Type::String), stringValue(str) {}
        JSONValue(double num) : type(Type::Number), numberValue(num) {}
        JSONValue(bool b) : type(Type::Boolean), boolValue(b) {}

        std::string toString(int indent = 0) const {
            const std::string indentStr = "    "; // 4 spaces for indentation
            std::string currentIndent;
            for (int i = 0; i < indent; i++) {
                currentIndent += indentStr;
            }
            std::string nextIndent = currentIndent + indentStr;

            switch (type) {
                case Type::String:
                    return "\"" + stringValue + "\"";
                case Type::Number:
                    return std::to_string(numberValue);
                case Type::Boolean:
                    return boolValue ? "true" : "false";
                case Type::Null:
                    return "null";
                case Type::Object: {
                    if (objectValues.empty()) return "{}";
                    std::string result = "{\n";
                    for (size_t i = 0; i < objectValues.size(); i++) {
                        result += nextIndent + "\"" + objectValues[i].first + "\": " + objectValues[i].second.toString(indent + 1);
                        if (i < objectValues.size() - 1) result += ",";
                        result += "\n";
                    }
                    result += currentIndent + "}";
                    return result;
                }
                case Type::Array: {
                    if (arrayValues.empty()) return "[]";
                    std::string result = "[\n";
                    for (size_t i = 0; i < arrayValues.size(); i++) {
                        result += nextIndent + arrayValues[i].toString(indent + 1);
                        if (i < arrayValues.size() - 1) result += ",";
                        result += "\n";
                    }
                    result += currentIndent + "]";
                    return result;
                }
                default:
                    return "";
            }
        }

        static JSONValue parse(const std::string& json) {
            size_t pos = 0;
            return parseValue(json, pos);
        }

    private:
        static void skipWhitespace(const std::string& json, size_t& pos) {
            while (pos < json.length() && (json[pos] == ' ' || json[pos] == '\n' || json[pos] == '\r' || json[pos] == '\t')) {
                pos++;
            }
        }

        static JSONValue parseValue(const std::string& json, size_t& pos) {
            skipWhitespace(json, pos);
            
            if (pos >= json.length()) return JSONValue();

            char c = json[pos];
            if (c == '{') return parseObject(json, pos);
            if (c == '[') return parseArray(json, pos);
            if (c == '"') return parseString(json, pos);
            if (c == 't' && json.substr(pos, 4) == "true") {
                pos += 4;
                return JSONValue(true);
            }
            if (c == 'f' && json.substr(pos, 5) == "false") {
                pos += 5;
                return JSONValue(false);
            }
            if (c == 'n' && json.substr(pos, 4) == "null") {
                pos += 4;
                return JSONValue();
            }
            if (c == '-' || (c >= '0' && c <= '9')) return parseNumber(json, pos);
            
            return JSONValue();
        }

        static JSONValue parseObject(const std::string& json, size_t& pos) {
            JSONValue result;
            result.type = Type::Object;
            pos++; // Skip '{'
            
            skipWhitespace(json, pos);
            if (json[pos] == '}') {
                pos++;
                return result;
            }

            while (true) {
                skipWhitespace(json, pos);
                if (json[pos] != '"') break;
                
                std::string key = parseString(json, pos).stringValue;
                skipWhitespace(json, pos);
                
                if (json[pos] != ':') break;
                pos++;
                
                JSONValue value = parseValue(json, pos);
                result.objectValues.push_back({key, value});
                
                skipWhitespace(json, pos);
                if (json[pos] == '}') {
                    pos++;
                    break;
                }
                
                if (json[pos] != ',') break;
                pos++;
            }
            
            return result;
        }

        static JSONValue parseArray(const std::string& json, size_t& pos) {
            JSONValue result;
            result.type = Type::Array;
            pos++; // Skip '['
            
            skipWhitespace(json, pos);
            if (json[pos] == ']') {
                pos++;
                return result;
            }

            while (true) {
                result.arrayValues.push_back(parseValue(json, pos));
                
                skipWhitespace(json, pos);
                if (json[pos] == ']') {
                    pos++;
                    break;
                }
                
                if (json[pos] != ',') break;
                pos++;
            }
            
            return result;
        }

        static JSONValue parseString(const std::string& json, size_t& pos) {
            JSONValue result;
            result.type = Type::String;
            pos++; // Skip '"'
            
            std::string value;
            while (pos < json.length() && json[pos] != '"') {
                if (json[pos] == '\\') {
                    pos++;
                    if (pos < json.length()) {
                        value += json[pos];
                    }
                } else {
                    value += json[pos];
                }
                pos++;
            }
            
            if (pos < json.length()) pos++; // Skip closing '"'
            result.stringValue = value;
            return result;
        }

        static JSONValue parseNumber(const std::string& json, size_t& pos) {
            JSONValue result;
            result.type = Type::Number;
            
            std::string numStr;
            while (pos < json.length() && (json[pos] == '-' || json[pos] == '.' || (json[pos] >= '0' && json[pos] <= '9'))) {
                numStr += json[pos];
                pos++;
            }
            
            result.numberValue = std::stod(numStr);
            return result;
        }
    };

    static bool saveToFile(const std::string& filename, const JSONValue& value) {
        std::ofstream file(filename);
        if (!file.is_open()) return false;
        file << value.toString();
        return true;
    }

    inline JSONValue loadFromFile(const std::string& filename) {
        std::ifstream file(filename);
        if (!file.is_open()) return JSONValue();
        
        std::stringstream buffer;
        buffer << file.rdbuf();
        return JSONValue::parse(buffer.str());
    }
} 