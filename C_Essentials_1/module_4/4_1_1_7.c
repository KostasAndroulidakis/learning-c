#include <stdio.h>

int main()
{
	int number;
	printf("Enter the number of a month: ");
	scanf("%d", &number);
	
	switch(number) {
    case 1: // January
        printf("There are 0 days before the given month.\n");
        break;
    case 2: // February 
        printf("There are 31 days before the given month.\n");
        break;
    case 3: // March (31 + 29 in leap year)
        printf("There are 60 days before the given month.\n");
        break;
    case 4: // April (31 + 29 + 31)
        printf("There are 91 days before the given month.\n");
        break;
    case 5: // May (31 + 29 + 31 + 30)
        printf("There are 121 days before the given month.\n");
        break;
    case 6: // June (31 + 29 + 31 + 30 + 31)
        printf("There are 152 days before the given month.\n");
        break;
    case 7: // July
        printf("There are 182 days before the given month.\n");
        break;
    case 8: // August
        printf("There are 213 days before the given month.\n");
        break;
    case 9: // September
        printf("There are 244 days before the given month.\n");
        break;
    case 10: // October
        printf("There are 274 days before the given month.\n");
        break;
    case 11: // November
        printf("There are 305 days before the given month.\n");
        break;
    case 12: // December
        printf("There are 335 days before the given month.\n");
        break;
    default:
        printf("Error: no such month in my calendar.\n");
        break;
    }
    
	return 0;
}