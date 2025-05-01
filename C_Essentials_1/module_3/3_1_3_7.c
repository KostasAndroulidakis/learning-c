#include <stdio.h>

int main()
{
	float number;
	int result;
	
	printf("Enter a number: ");
	scanf("%f", &number);
	
	result = (int) number;
	
	if (1 <= result && result < 2) {
	    printf("Very bad\n");
	} else if (2 <= result && result < 3) {
	    printf("Bad\n");
	} else if (3 <= result && result < 4) {
	    printf("Neutral\n");
	} else if (4 <= result && result < 5) {
	    printf("Good\n");
	} else if (5 <= result && result < 6) {
	    printf("Very good\n");
	}
	
	return 0;
}