#include "Strategy.h"

std::string CreditProfileStrategy::execute(const std::string& data) {
    return "Credit profile processed for: " + data;
}

std::string AddressUpdateStrategy::execute(const std::string& data) {
    return "Address updated for: " + data;
}