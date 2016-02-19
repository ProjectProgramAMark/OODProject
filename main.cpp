#include <iostream>
#include "Ticket_Book.h"

using namespace std;


// Professor wrote all of this code,
// essentially it's just creating the objects within functions


/* The hierarchy goes like this:
 Ticket Book contains Tickets, Tickets are for Performances,
 Performances contain Venues, Venues contain Seat Rows and Addresses,
 Seat Rows contain Seats
 */



// Create an Address object with the address of The Little Theater
Address* Create_Address()
{
    Address* address = new Address("19 Foster Street",
        "Littleton",
        "MA",
        1460);
    return address;
}

// Create a Seat_Row with the specified name and 
// specified number of seats,
Seat_Row* Create_Seat_Row(const string seat_row_name,
                          int number_of_seats)
{
    Seat_Row* row = new Seat_Row(seat_row_name);
    for (int i = 1; i <= number_of_seats; ++i)
    {
        Seat* new_seat = new Seat(seat_row_name, i);
        row->Add_Seat(new_seat);
    }
    return row;
}


// Create a Venue object corresponding to The Little Theater.
Venue* Create_Venue()
{
    Address* adr = Create_Address();
    Venue* venue = new Venue("The Little Theater", *adr);

    Seat_Row* sr = Create_Seat_Row("A", 4);
    venue->Add_Seat_Row(sr);

    sr = Create_Seat_Row("B", 4);
    venue->Add_Seat_Row(sr);

    sr = Create_Seat_Row("C", 4);
    venue->Add_Seat_Row(sr);

    return venue;
}

Performance* Create_Performance(Venue* venue)
{
    When when = {4, 2, 2016, 20, 0};
    
    Performance* p = new Performance("Billy Elliot", venue, &when);
    return p;
}

int main()
{
    //cout << "This is Ticket_Printer\n\n\n";
    Venue* venue = Create_Venue();
    Performance* performance = Create_Performance(venue);
    Ticket_Book* ticket_book = new Ticket_Book(performance);
    ticket_book->Display();
    
    cin.get();
    return 0;
}
