#include <iostream>
#include "time.h"

int main() {
    Time t1 = {3, 20};
    Time t2 = {10, 45};

    std::cout << "\n---------------------------" << "\n     DEMO OF TASK A \n" << std::endl;
    printTime(t1);
    std::cout << "(t1) Minutes since midnight: " << minutesSinceMidnight(t1) << std::endl;
    printTime(t2);
    std::cout << "(t2) Minutes since midnight: " << minutesSinceMidnight(t2) << std::endl;
    std::cout << "Minutes between two times: " << minutesUntil(t1, t2) << std::endl;


    std::cout << "\n---------------------------" << "\n     DEMO OF TASK B \n" << std::endl;
    Time t3 = addMinutes(t1, 15);
    Time t4 = addMinutes(t1, 45);
    std::cout << "addMinutes(t1, 15): ";
    printTime(t3);
    std::cout << "addMinutes(t1, 45): ";
    printTime(t4);

    std::cout << "\n---------------------------" << "\n     DEMO OF TASK \n" << std::endl;
    return 0;
}
