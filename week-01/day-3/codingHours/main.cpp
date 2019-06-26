#include <iostream>

int main(int argc, char* args []) {

    // An average Green Fox attendee codes 6 hours daily
    // The semester is 17 weeks long
    //
    // Print how many hours is spent with coding in a semester by an attendee,
    // if the attendee only codes on workdays.
    //
    // Print the percentage of the coding hours in the semester if the average
    // working hours weekly is 52

    int dailyCodingHours = 6;
    int numberOfWeeksInSemester = 17;
    int averageWeeklyWorkingHours = 52;
    int hoursOfAWeek = 168;


    std::cout << "An attandee in GFA spends " << numberOfWeeksInSemester * 5 * dailyCodingHours << " hours with coding in a semester if he/she codes only on weekdays." << std::endl;

    std::cout << "That's " << averageWeeklyWorkingHours * 100 / hoursOfAWeek << "% of the whole time during the semester." << std::endl;


    return 0;
}