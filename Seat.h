#pragma once
#include <string>


// This area is supposedly where the segmentation fault is happening

class Seat
{
private:
    std::string seat_row_name;
    int seat_number;

public:
    Seat(std::string Row_Name,
        int Seat_Number);

    void Display() const;
};