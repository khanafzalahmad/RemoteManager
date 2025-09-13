#pragma once
#include <string>
#include <map>
#include <memory>
#include "Strategy.h"

class InquiryManager {
public:
    InquiryManager();
    ~InquiryManager();
    int processRequest(const std::string& inputJson);
private:
    std::map<std::string, std::shared_ptr<InquiryStrategy>> strategyMap;
    void loadStrategies();
};