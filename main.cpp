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

    Movie eeaao = {"Everything Everywhere All at Once", ACTION, 140};
    Movie saving_face = {"Saving Face", ROMANCE, 91};
    TimeSlot morning_eeaao = {eeaao, {9, 15}};
    TimeSlot afternoon_eeaao = {eeaao, {12, 00}};
    TimeSlot evening_eeaao = {eeaao, {16, 50}};
    TimeSlot afternoon_sf = {saving_face, {12, 30}};
    TimeSlot evening_sf = {saving_face, {16, 45}};

    std::cout << "\n\n---------------------------" << "\n     DEMO OF TASK C" << std::endl;
    std::cout << "1. " << getTimeSlot(morning_eeaao) << std::endl;
    std::cout << "2. " << getTimeSlot(afternoon_eeaao) << std::endl;
    std::cout << "3 . " << getTimeSlot(evening_eeaao) << std::endl;
    std::cout << "4. " << getTimeSlot(afternoon_sf) << std::endl;
    std::cout << "5. " << getTimeSlot(evening_sf) << std::endl;

    std::cout << "\n---------------------------" << "\n     DEMO OF TASK D " << std::endl;
    TimeSlot new_morning_eeaao = scheduleAfter(morning_eeaao, eeaao);
    TimeSlot new_afternoon_eeaao = scheduleAfter(afternoon_eeaao, eeaao);
    TimeSlot new_evening_eeaao = scheduleAfter(evening_eeaao, eeaao);
    TimeSlot new_afternoon_sf = scheduleAfter(afternoon_sf, saving_face);
    TimeSlot new_evening_sf = scheduleAfter(evening_sf, saving_face);

    std::cout << "New timeslot of each of the above: \n6. " << getTimeSlot(new_morning_eeaao) << std::endl;
    std::cout << "7. " << getTimeSlot(new_afternoon_eeaao) << std::endl;
    std::cout << "8. " << getTimeSlot(new_evening_eeaao) << std::endl;
    std::cout << "9. " << getTimeSlot(new_afternoon_sf) << std::endl;
    std::cout << "10. " << getTimeSlot(new_evening_sf) << std::endl;

    std::cout << "\n---------------------------" << "\n     DEMO OF TASK E " << std::endl;
    std::cout << "Overlap between #2 and #9? " << timeOverlap(afternoon_eeaao, new_afternoon_sf) << std::endl;
    std::cout << "Overlap between #1 and #5? " << timeOverlap(morning_eeaao, evening_sf) << std::endl;
    std::cout << "Overlap between #1 and #6? " << timeOverlap(morning_eeaao, new_morning_eeaao) << "\n\n";

    return 0;
}
