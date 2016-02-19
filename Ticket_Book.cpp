#include "Ticket_Book.h"
using namespace std;
Ticket_Book::Ticket_Book(Performance *performance) :
performance(*performance) {
    Venue *venue = performance->getVenue();
    int numOfRows = venue->getNumberOfSeatRows();
    int numOfSeats = venue->Capacity();
    
    
    /* Tried this, wasn't working, so commented it out.
     * The problem was that for some reason number of seats I guess is 0.
     * Idk why */
    
    
    // for each seat row in this performance
//    for(int i=0; i<numOfRows; i++) {
//        // for each seat in this seat row
//        for(int j=0; j < (numOfSeats/numOfRows); j++) {
//            const Seat seat = *venue->getSeatRow(i).getSeat(j);
//            // I need to create a Ticket object and save it to tickets array
//            tickets[j] = new Ticket(performance, &seat);
//        }
    
//    };
    
    
    for(int i=0; i<numOfRows; i++) {
        const Seat_Row seatRow = venue->getSeatRow(i);
        for(int j=0; j<seatRow.getNumberOfSeats(); j++) {
            tickets[j] = new Ticket(performance, seatRow.getSeat(j));
        }
    };
};

void Ticket_Book::Display() const {
    cout << "Hello World Please Work!" << numOfSeats << endl;
    for(int i=0; i<numOfSeats; i++) {
        cout << "Hello world!";
        cout << "Performance: " << tickets[i]->getPerformance().getPerformanceName() << endl;
        When dateTime = tickets[i]->getPerformance().getPerformanceWhen();
        cout << dateTime.month << "/" << dateTime.day << "/" << dateTime.year << " at" << dateTime.hour << ":" << dateTime.minute;
        cout << endl;
        const Address* address = tickets[i]->getPerformance().getVenue()->getAddress();
        address->Display();
        tickets[i]->getPerformance().getVenue()->getSeatRow(i).getSeat(i);
        
    };
};