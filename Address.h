#pragma once
#include <string>


class Address
{
private:
    std::string street_address;
    std::string city;
    std::string state;
    int zip_code;

public:
    Address(std::string Street_Address,
            std::string City,
            std::string State,
            int Zip_Code);

    void Display() const;
};


