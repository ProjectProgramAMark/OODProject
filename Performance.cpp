#include "Performance.h"
using namespace std;


Performance::Performance(string show_name, Venue* venue, When *when) :
show_name(show_name), venue(venue) {
    this->when = when;
}

Venue* Performance::getVenue() {
    return this->venue;
}

string Performance::getPerformanceName() {
    return show_name;
}

When& Performance::getPerformanceWhen() {
    return *when;
}