#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "time.h"
#include "movie.h"
#include "timeslot.h"

Time t0 = {0, 0};
Time t1 = {1, 11};
Time t2 = {13, 59};
Time t3 = {23, 18};

TEST_CASE("TASK A: minutesSinceMidnight()") {
    CHECK(minutesSinceMidnight(t0) == 0);
    CHECK(minutesSinceMidnight(t1) == 71);
    CHECK(minutesSinceMidnight(t2) == 839);
    CHECK(minutesSinceMidnight(t3) == 1398);
}

TEST_CASE("TASK A: minutesUntil()") {
    CHECK(minutesUntil(t0, t1) == 71);
    CHECK(minutesUntil(t1, t0) == -71);
    CHECK(minutesUntil(t1, t2) == 768);
    CHECK(minutesUntil(t2, t3) == 559);
    CHECK(minutesUntil(t3, t2) == -559);
}

TEST_CASE("TASK B: addMinutes()") {
    Time test_example = {9, 25};
    Time t1_ver1 = {1, 22}; // + 11 mins
    Time t1_ver2 = {3, 13}; // + 2 hours and 2 mins
    CHECK(addMinutes(t1, 11) == t1_ver1);
    CHECK(addMinutes(t1, 122) == t1_ver2);
    CHECK(addMinutes({8, 10}, 75) == test_example);
}

Movie movie1 = {"Back to the Future", COMEDY, 116};
Movie movie2 = {"Black Panther", ACTION, 134};
TimeSlot morning = {movie1, {9, 15}};
TimeSlot daytime = {movie2, {12, 15}};
TimeSlot evening = {movie2, {16, 45}};

//these test cases were taken from the lab 10 instruction site
TEST_CASE("TASK C: getTimeSlot()") {
    CHECK(getTimeSlot(morning) == "Back to the Future COMEDY (116 min) [starts at 9:15, ends by 11:11]");
    CHECK(getTimeSlot(daytime) == "Black Panther ACTION (134 min) [starts at 12:15, ends by 14:29]");
    CHECK(getTimeSlot(evening) == "Black Panther ACTION (134 min) [starts at 16:45, ends by 18:59]");
}

TEST_CASE("TASK D: scheduleAfter()") {
    TimeSlot morning1 = {movie1, {11, 11}};
    TimeSlot daytime1 = {movie2, {14, 29}};
    TimeSlot evening1 = {movie1, {18, 59}};
    CHECK(scheduleAfter(morning, movie1) == morning1);
    CHECK(scheduleAfter(daytime, movie2) == daytime1);
    CHECK(scheduleAfter(evening, movie1) == evening1);
}
