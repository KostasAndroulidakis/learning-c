#include <stdio.h>

int main()
{
	int day, month, year;
	int dayOfYear = 0;
    int isLeapYear = 0;
	
	// Read day, month and year from user
    printf("Enter day: \n");
    scanf("%d", &day);
    printf("Enter month: \n");
    scanf("%d", &month);
    printf("Enter year: \n");
    scanf("%d", &year);
	
    // Check if it's a leap year
    if (year % 400 == 0)
        isLeapYear = 1;
    else if (year % 100 == 0)
        isLeapYear = 0;
    else if (year % 4 == 0)
        isLeapYear = 1;
    else
        isLeapYear = 0;
	
	// Define days in each month (0th position ignored for easier indexing)
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // Adjust February for leap year
    if (isLeapYear)
        daysInMonth[2] = 29;
    
    // Calculate day of the year
    for (int i = 1; i < month; i++) {
        dayOfYear += daysInMonth[i];
    }
    dayOfYear += day;
    
    // Print results
    printf("Day of the year: %d\n", dayOfYear);
    if (isLeapYear)
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);
	
	return 0;
}