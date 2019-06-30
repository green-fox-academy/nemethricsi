#include <iostream>

int main(int argc, char *args[])
{
    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;

    int secondsInADay = 24 * 60 * 60;
    int currentHoursInSec = currentHours * 60 * 60;
    int currentMinutesInSec = currentMinutes * 60;

    std::cout << "The remaining seconds from the day is: "
              << secondsInADay - (currentSeconds + currentHoursInSec + currentMinutesInSec) << std::endl;

    return 0;
}