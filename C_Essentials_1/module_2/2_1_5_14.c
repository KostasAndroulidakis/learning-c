#include <stdio.h>

int main()
{
    int days;
    float pi;
    
    // Prompt for and read the number of days
    printf("How many days in the week: ");
    scanf("%d", &days);
    
    // Prompt for and read the value of Pi
    printf("The value of Pi to two points: ");
    scanf("%f", &pi);
    
    // Print the output
    printf("There are %d days in the week.\n", days);
    printf("Pi value is %.6f.\n", pi);

    
	return 0;
}