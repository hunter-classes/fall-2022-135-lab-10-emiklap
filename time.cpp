#include <iostream>
#include "time.h"

void printTime(Time time) {
    std::cout << time.h << ":" << time.m << std::endl;
}

int minutesSinceMidnight(Time time) {
    return (time.h * 60) + time.m;
}

int minutesUntil(Time earlier, Time later) {
    int earlierMins = minutesSinceMidnight(earlier);
    int laterMins = minutesSinceMidnight(later);
    return laterMins - earlierMins;
}
