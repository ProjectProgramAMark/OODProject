#pragma once
#include "Seat.h"
class Seat_Row {
public:
    static const int MAX_SEATS_PER_ROW = 1000;

private:
    std::string row_name;
    const Seat* seats[MAX_SEATS_PER_ROW];
    int  number_of_seats;

public:
    Seat_Row(const std::string Row_Name);
    void Add_Seat(const Seat* new_seat);
    void Display() const;
    const Seat* getSeat(int seatNum) const;
    int getNumberOfSeats() const;
};