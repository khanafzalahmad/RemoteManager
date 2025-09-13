#include <iostream>
#include "InquiryManager.h"

int main() {
    std::string inputJson = "{\"transactionId\":\"TX12345\",\"inquiryType\":\"CreditProfile\",\"data\":\"John Doe, SSN: 123-45-6789\"}";
    InquiryManager manager;
    manager.processRequest(inputJson);
    return 0;
}