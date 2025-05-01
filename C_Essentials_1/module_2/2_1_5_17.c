#include <stdio.h>

int main()
{
	int dayOfWeek;
	
	printf("Enter the day of the week (1-7): ");
	scanf("%d", &dayOfWeek);

    if (dayOfWeek == 1) {
        printf("The day of the week is: Monday\n");
    } else if (dayOfWeek == 2) {
        printf("The day of the week is: Tuesday\n");
    } else if (dayOfWeek == 3) {
        printf("The day of the week is: Wednesday\n");
    } else if (dayOfWeek == 4) {
        printf("The day of the week is: Thursday\n");
    } else if (dayOfWeek == 5) {
        printf("The day of the week is: Friday\n");
    } else if (dayOfWeek == 6) {
        printf("The day of the week is: Saturday\n");
    } else if (dayOfWeek == 7) {
        printf("The day of the week is: Sunday\n");
    } else if (dayOfWeek < 0) {
        printf("Invalid input. Please enter a number between 1 and 7.\n");
        printf("There is no such day: %d. Input value must be from 1 to 7.\n", dayOfWeek);
    } else {
        printf("Invalid input. Please enter a number between 1 and 7.\n");
    }
	
	return 0;
}