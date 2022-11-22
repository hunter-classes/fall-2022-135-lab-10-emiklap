#include <iostream>
#include "time.h"
#include "movie.h"
#include "timeslot.h"
#include "funcs.h"

int main() {
    Time t1 = {3, 20};
    Time t2 = {10, 45};

    std::cout << "\n---------------------------" << "\n     DEMO OF TASK A" << std::endl;
    std::cout << printTime(t1) << "\n(t1) Minutes since midnight: " << minutesSinceMidnight(t1) << std::endl;
    std::cout << printTime(t2) << "\n(t2) Minutes since midnight: " << minutesSinceMidnight(t2) << std::endl;
    std::cout << "Minutes between two times: " << minutesUntil(t1, t2) << std::endl;


    std::cout << "\n---------------------------" << "\n     DEMO OF TASK B " << std::endl;
    Time t3 = addMinutes(t1, 15);
    Time t4 = addMinutes(t1, 45);
    std::cout << "addMinutes(t1, 15): " << printTime(t3);
    std::cout << "\naddMinutes(t1, 45): " << printTime(t4);

    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"Black Panther", ACTION, 134};
    TimeSlot morning = {movie1, {9, 15}};
    TimeSlot daytime = {movie2, {12, 15}};
    TimeSlot evening = {movie2, {16, 45}};
    std::cout << "\n\n---------------------------" << "\n     DEMO OF TASK C" << std::endl;
    std::cout << getTimeSlot(morning) << std::endl;
    std::cout << getTimeSlot(daytime) << std::endl;
    std::cout << getTimeSlot(evening) << std::endl;

    std::cout << "\n\n---------------------------" << "\n     DEMO OF TASK  \n" << std::endl;

    return 0;
}
