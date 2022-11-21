#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "time.h"

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
}
