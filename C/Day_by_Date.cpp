#include <stdio.h>

// Function prototypes
int isLeapYear(int year);
int isValidDate(int day, int month, int year);
int getCenturyCode(int year);
int getYearCode(int year);
int getMonthCode(int month, int year);
int calculateDayOfWeek(int day, int month, int year);
void printDayOfWeek(int dayOfWeek);

int main() {
    int day, month, year, dayOfWeek;

    // Read input date from the user
    printf("Enter day, month, and year (DD MM YYYY): ");
    scanf("%d%d%d", &day, &month, &year);

    // Validate the input date
    if (!isValidDate(day, month, year)) {
        printf("Invalid Date\n");
        return 1;
    }

    // Calculate the day of the week
    dayOfWeek = calculateDayOfWeek(day, month, year);

    // Output the day of the week
    printDayOfWeek(dayOfWeek);

    return 0;
}

// Function to check if a year is a leap year
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to validate the input date
int isValidDate(int day, int month, int year) {
    int maxDaysInMonth[] = {31, 28, 31, 30, 31, 30,
                            31, 31, 30, 31, 30, 31};

    // Check for valid month and year
    if (year <= 0 || month <= 0 || month > 12 || day <= 0)
        return 0;

    // Adjust February days in leap years
    if (isLeapYear(year))
        maxDaysInMonth[1] = 29;

    // Check for valid day
    if (day > maxDaysInMonth[month - 1])
        return 0;

    return 1;
}

// Function to calculate the century code
int getCenturyCode(int year) {
    int century = year / 100;
    int code = (3 - (century % 4)) * 2;
    return code;
}

// Function to calculate the year code
int getYearCode(int year) {
    int lastTwoDigits = year % 100;
    return lastTwoDigits + (lastTwoDigits / 4);
}

// Function to calculate the month code
int getMonthCode(int month, int year) {
    int monthCodes[] = {0, 3, 3, 6, 1, 4,
                        6, 2, 5, 0, 3, 5};

    // Adjust month codes for January and February in leap years
    if (isLeapYear(year) && (month == 1 || month == 2))
        return monthCodes[month - 1] - 1;

    return monthCodes[month - 1];
}

// Function to calculate the day of the week using Zeller's Congruence
int calculateDayOfWeek(int day, int month, int year) {
    if (month <= 2) {
        month += 12;
        year -= 1;
    }

    int centuryCode = getCenturyCode(year);
    int yearCode = getYearCode(year);
    int monthCode = getMonthCode(month, year);

    int total = day + monthCode + yearCode + centuryCode;
    int dayOfWeek = total % 7;

    return dayOfWeek;
}

// Function to print the day of the week
void printDayOfWeek(int dayOfWeek) {
    const char *days[] = {"Saturday", "Sunday", "Monday", "Tuesday",
                          "Wednesday", "Thursday", "Friday"};

    printf("%s\n", days[dayOfWeek]);
}
