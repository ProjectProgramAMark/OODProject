#include "Ticket.h"
using namespace std;

Ticket::Ticket(Performance *performance, const Seat *seat)
: performance(*performance), seat(*seat) {
    sold = false;
};

Performance Ticket::getPerformance() const {
    return performance;
};

void Ticket::Display() const {
    // Each ticket has a Performance
    // Each Performance has a Venue
    // Venue has a Seat_Row and Address
    // Seat_Row has an array of Seats
    cout << "Performance: " << this->getPerformance().getPerformanceName() << endl;
    When *dateTime = &this->getPerformance().getPerformanceWhen();
    cout << "This is datetime: " << &dateTime << endl;
    cout << dateTime->month << "/" << dateTime->day << "/" << dateTime->year << " at" << dateTime->hour << ":" << dateTime->minute;
    cout << endl;
    const Address* address = this->getPerformance().getVenue()->getAddress();
    // Displaying seat row name and number
    address->Display();
    this->seat.Display();
    cout << endl;
}