#include <iostream>
#include "time.h"

int main() {
    Time t1 = {3, 20};
    Time t2 = {10, 45};

    std::cout << "\n------------------------" << "\n DEMO OF TASK A \n" << std::endl;
    printTime(t1);
    std::cout << "Minutes since midnight: " << minutesSinceMidnight(t1) << std::endl;
    printTime(t2);
    std::cout << "Minutes since midnight: " << minutesSinceMidnight(t2) << std::endl;
    std::cout << "\nMinutes between two times: " << minutesUntil(t1, t2) << std::endl;


    std::cout << "\n------------------------" << "\n DEMO OF TASK B \n" << std::endl;
    return 0;
}
