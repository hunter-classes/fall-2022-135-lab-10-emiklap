#include "time.h"
#include "movie.h"
#include "timeslot.h"

std::string printTime(Time time);

//task A
int minutesSinceMidnight(Time);
int minutesUntil(Time, Time);

//task B
Time addMinutes(Time, int);

//task C
std::string getTimeSlot(TimeSlot);

//task D
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie);

//task E
bool timeOverlap(TimeSlot ts1, TimeSlot ts2);
