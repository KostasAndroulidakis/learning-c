#include <stdio.h>

int main(void)
{
	float notExactFive = 5.4;
	float notExactNumber = 6.7;
	int exactFive;
	int roundedNumber;
	
    // Get the fractional part of notExactNumber
    float fractionalPart = notExactNumber - (int)notExactNumber;

    // Round based on the fractional part
    if (fractionalPart >= 0.5)
    {
        roundedNumber = (int)notExactNumber + 1; // Round up
    }
    else
    {
        roundedNumber = (int)notExactNumber; // Round down
    }
    
    // Convert notExactFive to an integer
	exactFive = (int)notExactFive;
	
	printf("Five is: %d\n", exactFive);
	printf("Rounded to seven: %d\n", roundedNumber);
	return 0;
}