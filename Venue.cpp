#include <string>
#include <iostream>
#include <cassert>
#include "Venue.h"
#include "Seat_Row.h"
using namespace std;

Venue::Venue(const string& name_,
    const Address& address_) :
    name(name_), address(&address_), number_of_seat_rows(0)
{}

void Venue::Add_Seat_Row(Seat_Row* seat_row)
{
    assert(number_of_seat_rows < MAX_SEAT_ROWS - 1);
    seat_rows[number_of_seat_rows++] = seat_row;
}

void Venue::Display() const
{
    cout << name << endl;
    address->Display();
    for (int i = 0; i < number_of_seat_rows; ++i)
    {
        const Seat_Row* row = seat_rows[i];
        row->Display();
    }
}

int Venue::getNumberOfSeatRows() {
    return number_of_seat_rows;
}
//
const Seat* Venue::getSeatFromVenue(int seatNum) const {
    const Seat* theSeat = seat_rows[seatNum]->getSeat(seatNum);
    return theSeat;
}

const Seat_Row Venue::getSeatRow(int seatRowNum) {
    return *seat_rows[seatRowNum];
}

int Venue::Capacity() const {
    return (4 * number_of_seat_rows);
}

const Address* Venue::getAddress() {
    return address;
}