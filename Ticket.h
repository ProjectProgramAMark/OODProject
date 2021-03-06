#ifndef Ticket_h
#define Ticket_h

#include <iostream>
#include "Performance.h"

class Ticket {
private:
    Performance performance;
    const Seat seat;
    bool sold;
public:
    Ticket(Performance *performance, const Seat *seat);
    Performance getPerformance() const;
    void Display() const;
};

#endif /* Ticket_h */
