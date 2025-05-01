#include <stdio.h>

int main()
{
	int number;
	printf("Enter a number smaller than 256: ");
	scanf("%d", &number);
	
    // To get low nibble
    int low_nibble = number & 0xF;  // bitwise AND with 00001111
    // To get high nibble
    int high_nibble = (number >> 4) & 0xF;  // shift right 4 bits then mask
	
	printf("H nibble: %d\n", high_nibble);
	printf("L nibble: %d\n", low_nibble);
	return 0;
}