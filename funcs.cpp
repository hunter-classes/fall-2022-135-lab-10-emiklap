#include <iostream>
#include <iomanip>
#include <sstream>
#include "time.h"
#include "movie.h"
#include "timeslot.h"

std::string printTime(Time time) {
    std::stringstream ret_str;
    ret_str << time.h << ":" << std::setw(2) << std::setfill('0') << time.m;
    return ret_str.str();
}

//task A
int minutesSinceMidnight(Time time) {
    return (time.h * 60) + time.m;
}

int minutesUntil(Time earlier, Time later) {
    int earlierMins = minutesSinceMidnight(earlier);
    int laterMins = minutesSinceMidnight(later);
    return laterMins - earlierMins;
}

//task B
Time addMinutes(Time time0, int min) {
    time0.m += min;
    if (time0.m > 60) {
        time0.h += time0.m / 60;
        time0.m = time0.m % 60;
    }
    return time0;
}

//task C
std::string getTimeSlot(TimeSlot ts) {
    std::string g;
    switch (ts.movie.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    Time endTime = addMinutes(ts.startTime , ts.movie.duration );

    std::string ret_str = ts.movie.title + " " + g + " (" + std::__cxx11::to_string(ts.movie.duration) + " min) ";
    ret_str += "[starts at " + printTime(ts.startTime) + ", ends by " + printTime(endTime) + "]";
    return ret_str;
}
