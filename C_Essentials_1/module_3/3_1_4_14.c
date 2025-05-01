#include <stdio.h>

int main()
{
	int number;
	scanf("%d", &number);
	
	// Handle constraints
	if (number <= 1) {
    number = 1;
    } else if (number > 20) {
        number = 20;
    }
	
	int line = 1;
    do {
        int pairs = 0;
        do {
            printf("*#");  // Print a pair of "*"
            pairs++;
        } while (pairs < line);  // Print 'line' number of pairs
        
        printf("\n");  // New line after each row
        line++;
    } while (line <= number);  // Repeat for 'number' lines
	
	return 0;
}