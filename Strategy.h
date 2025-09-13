#pragma once
#include <string>

class InquiryStrategy {
public:
    virtual ~InquiryStrategy() = default;
    virtual std::string execute(const std::string& data) = 0;
};

class CreditProfileStrategy : public InquiryStrategy {
public:
    std::string execute(const std::string& data) override;
};

class AddressUpdateStrategy : public InquiryStrategy {
public:
    std::string execute(const std::string& data) override;
};