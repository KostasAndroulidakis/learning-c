#include <stdio.h>

int main()
{
	float valueA;
	float valueB;
	
	// Prompt for values
	scanf("%f", &valueA);
	scanf("%f", &valueB);
	
	// Print the output
	printf("Value A: %.2f\n", valueA);
	printf("Value B: %.2f\n", valueB);
	printf("%.6f + %.6f = %.6f.\n", valueA, valueB, valueA + valueB);
	printf("%.6f - %.6f = %.6f.\n", valueA, valueB, valueA - valueB);
	printf("%.6f * %.6f = %.6f.\n", valueA, valueB, valueA * valueB);
	return 0;
}