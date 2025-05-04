#include <stdio.h>

int main()
{
	char numbers[4][4];
	
	printf("Enter the first number: ");
	scanf("%s", numbers[0]);
    printf("Enter the second number: ");
	scanf("%s", numbers[1]);
	printf("Enter the third number: ");
	scanf("%s", numbers[2]);
	printf("Enter the fourth number: ");
	scanf("%s", numbers[3]);
	
	char ipAddress[16];
	sprintf(ipAddress, "%s.%s.%s.%s", numbers[0], numbers[1], numbers[2], numbers[3]);
	printf("%s",ipAddress);
	return 0;
}