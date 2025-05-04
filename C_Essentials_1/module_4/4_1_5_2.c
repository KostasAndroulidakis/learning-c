#include <stdio.h>

int main()
{
	char names[4][20];
	
	printf("Enter the first name: ");
	scanf("%19s", names[0]);
    printf("Enter the second name: ");
	scanf("%19s", names[1]);
	printf("Enter the third name: ");
	scanf("%19s", names[2]);
	printf("Enter the fourth name: ");
	scanf("%19s", names[3]);

    for(int i = 3; i > -1; i--)
    {
        printf("%s\n", names[i]);
    }
	
	return 0;
}