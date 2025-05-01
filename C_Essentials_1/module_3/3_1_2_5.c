#include <stdio.h>

int main()
{
	int num1, num2, num3, num4;
	
	// Read numbers from user
    printf("Enter first Number: \n");
    scanf("%d", &num1);
    printf("Enter second Number: \n");
    scanf("%d", &num2);
	printf("Enter third Number: \n");
    scanf("%d", &num3);
    printf("Enter fourth Number: \n");
    scanf("%d", &num4);
    
    if (num1 < 0 || num1 > 255 || 
        num2 < 0 || num2 > 255 || 
        num3 < 0 || num3 > 255 || 
        num4 < 0 || num4 > 255) {
        printf("Incorrect IP Address.\n");
    } else {
    // Calculate 32-bit number
    unsigned long int ip_number = (unsigned long int)num1 * 16777216 + 
                                 (unsigned long int)num2 * 65536 + 
                                 (unsigned long int)num3 * 256 + 
                                 num4;
    
    // Print both formats
    printf("Human-readable IP address is: %d.%d.%d.%d\n", num1, num2, num3, num4);
    printf("IP address as a 32-bit number: %lu\n", ip_number);
    }
    
	return 0;
}