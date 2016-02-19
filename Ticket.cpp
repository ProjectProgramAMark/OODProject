#include "Ticket.h"
Ticket::Ticket(Performance *performance, const Seat *seat)
: performance(*performance), seat(*seat) {
    sold = false;
};

Performance Ticket::getPerformance() {
    return performance;
}