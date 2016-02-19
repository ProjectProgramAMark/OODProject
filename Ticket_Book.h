#ifndef Ticket_Book_h
#define Ticket_Book_h

#include <iostream>
#include "Ticket.h"

class Ticket_Book {
public:
    static const int MAX_TICKETS_PER_PERFORMANCE = 1000;
private:
    Ticket *tickets[MAX_TICKETS_PER_PERFORMANCE];
    Performance performance;
    int numOfRows;
    int numOfSeats;
public:
    Ticket_Book(Performance *performance);
    void Display() const;

};

#endif /* Ticket_Book_h */
