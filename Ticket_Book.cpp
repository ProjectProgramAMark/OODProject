#include "Ticket_Book.h"
using namespace std;

Ticket_Book::Ticket_Book(Performance *performance) :
performance(*performance) {
    Venue *venue = performance->getVenue();
    int numOfRows = venue->getNumberOfSeatRows();
    numOfSeats = venue->Capacity();
    counter = 0;
    
    
    // for each seat row in this performance
    cout << "Number of Rows" << numOfRows << endl;
    cout << "Number of Seats" << numOfSeats << endl;
    for(int i=0; i<numOfRows; i++) {
        Seat_Row seatRow = venue->getSeatRow(i);
        for (int j = 0; j<seatRow.getNumberOfSeats(); ++j) {
            tickets[counter++] = new Ticket(performance, seatRow.getSeat(j));
        };
    }
    
    };

void Ticket_Book::Display() const {
    cout << "Hello World Please Work!" << this->numOfSeats << endl;
    for(int i=0; i<counter; i++) {
        tickets[i]->getPerformance().getVenue()->getSeatRow(i).getSeat(i);
        
    };
};