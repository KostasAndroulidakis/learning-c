#include <stdio.h>

int main() {
    int day, month;
    int dayOfYear = 0;
    
    // Read day and month from user
    scanf("%d", &day);
    scanf("%d", &month);
    
    // Array to store days in each month (0th index unused for clarity)
    // February has 29 days since we're assuming a leap year
    int daysInMonth[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // Calculate day of year by adding days from previous months
    for (int i = 1; i < month; i++) {
        dayOfYear += daysInMonth[i];
    }
    
    // Add the input day to get final result
    dayOfYear += day;
    
    // Print the result
    printf("The day of the year: %d\n", dayOfYear);
    
    return 0;
}