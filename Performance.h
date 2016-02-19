#ifndef Performance_h
#define Performance_h
#include <string>
#include <iostream>
#include "Venue.h"


struct When {
    int month;
    int day;
    int year;
    int hour;
    int minute;
};

class Performance {
    
private:
    std::string show_name;
    Venue *venue;
    When *when;
public:
    Performance(std::string show_name, Venue* venue, When* when);
    Venue* getVenue();
    std::string getPerformanceName();
    When getPerformanceWhen();

};
#endif /* Performance_h */