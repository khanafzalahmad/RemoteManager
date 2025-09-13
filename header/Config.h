#pragma once
#include <string>
#include <map>

class Config {
public:
    static Config& instance();
    std::string get(const std::string& key, const std::string& defaultVal = "") const;
    void set(const std::string& key, const std::string& value);
private:
    Config() = default;
    std::map<std::string, std::string> settings;
};