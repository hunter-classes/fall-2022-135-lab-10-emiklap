#pragma once
#include "time.h"
#include "movie.h"

class TimeSlot {
public:
    Movie movie;     // what movie
    Time startTime;  // when it starts
    bool operator==(const TimeSlot& new_timeSlot) const {
        return movie == new_timeSlot.movie && startTime == new_timeSlot.startTime;
    }
};
