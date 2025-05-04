#include <stdio.h>

int main()
{
	int fibonacci[10];

    fibonacci[0] = 1;
    fibonacci[1] = 1;
	
	for (int i = 2; i < 10; i++) {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
	
	for (int i = 0; i < 10; i++) {
        printf("%d\n", fibonacci[i]);
    }
    
    for (int i = 0; i < 10; i += 2) {
        printf("%d\n", fibonacci[i]);
    }
    
    for (int i = 1; i < 10; i += 2) {
        printf("%d\n", fibonacci[i]);
    }
	
	return 0;
}