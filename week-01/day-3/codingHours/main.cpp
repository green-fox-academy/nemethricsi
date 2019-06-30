#include <iostream>

int main(int argc, char *args[])
{
    int dailyCodingHours = 6;
    int numberOfWeeksInSemester = 17;
    int averageWeeklyWorkingHours = 52;
    int hoursOfAWeek = 168;

    std::cout << "An attandee in GFA spends " << numberOfWeeksInSemester * 5 * dailyCodingHours
              << " hours with coding in a semester if he/she codes only on weekdays." << std::endl;

    std::cout << "That's " << averageWeeklyWorkingHours * 100 / hoursOfAWeek
              << "% of the whole time during the semester." << std::endl;

    return 0;
}