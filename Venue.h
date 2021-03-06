#pragma once
#include <string>
#include "Address.h"
#include "Seat.h"
#include "Seat_Row.h"

class Venue
{
public:
    static const int MAX_SEAT_ROWS = 1000;

private:
    std::string name;
    const Address* address;
    const Seat_Row* seat_rows[MAX_SEAT_ROWS];
    int number_of_seat_rows;

public:
    Venue(const std::string& name_,
        const Address& address_);
    void Add_Seat_Row(Seat_Row* seat_row);
    int Capacity() const;     // Number of seats
    void Display() const;
    int getNumberOfSeatRows();
    const Seat* getSeatFromVenue(int seatNum) const;
    const Address* getAddress();
    const Seat_Row getSeatRow(int seatRowNum);
};