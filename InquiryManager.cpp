#include "InquiryManager.h"
#include "Logger.h"
#include <fstream>
#include <thread>

InquiryManager::InquiryManager() {
    loadStrategies();
}

InquiryManager::~InquiryManager() {}

void InquiryManager::loadStrategies() {
    strategyMap["CreditProfile"] = std::make_shared<CreditProfileStrategy>();
    strategyMap["AddressUpdate"] = std::make_shared<AddressUpdateStrategy>();
}

int InquiryManager::processRequest(const std::string& inputJson) {
    std::string transactionId = "TX12345";
    std::string inquiryType = "CreditProfile";
    std::string data = "John Doe, SSN: 123-45-6789";

    auto strategy = strategyMap[inquiryType];
    std::string result = strategy->execute(data);

    std::thread logThread([=]() {
        Logger::log("Processing inquiry: " + inputJson);
    });
    logThread.detach();

    std::ofstream outFile("SecureInquiryProcessor/output/inquiry_" + transactionId + ".txt");
    outFile << "Transaction: " << transactionId << "\nType: " << inquiryType << "\nResult: " << result << std::endl;
    outFile.close();

    return 0;
}