#include "Config.h"

Config& Config::instance() {
    static Config cfg;
    return cfg;
}

std::string Config::get(const std::string& key, const std::string& defaultVal) const {
    auto it = settings.find(key);
    return it != settings.end() ? it->second : defaultVal;
}

void Config::set(const std::string& key, const std::string& value) {
    settings[key] = value;
}