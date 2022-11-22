#pragma once

class Time {
public:
    int h;
    int m;
    bool operator==(const Time& new_time) const {
        return h == new_time.h && m == new_time.m;
    }
};
