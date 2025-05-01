#include <stdio.h>

int main()
{
	int a = 10;
	if (a > 9) {
        printf("First condition is true\n");
        fflush(stdout);
    }
    
    if (a == 9) {
        printf("Second condition is true\n");
        fflush(stdout);
    }
    
    if (a == 9 + 1) {
        printf("Third condition is true\n");
        fflush(stdout);
    }
	return 0;
}