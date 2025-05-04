#include <stdio.h>

int main()
{

	printf("%zu byte for chars\n", sizeof(char));
	printf("%zu byte for char variables\n", sizeof(char));
	printf("%zu bytes for shorts\n", sizeof(short int));
	printf("%zu bytes for short variables\n", sizeof(short int));
	printf("%zu bytes for ints\n", sizeof(int));
	printf("%zu bytes for int variables\n", sizeof(int));
	printf("%zu bytes for longs\n", sizeof(long int));
	printf("%zu bytes for long variables\n", sizeof(long int));
	printf("%zu bytes for long longs\n", sizeof(long long int));
	printf("%zu bytes for long long variables\n", sizeof(long long int));
    printf("%zu bytes for floats\n", sizeof(float));
    printf("%zu bytes for float variables\n", sizeof(float));
    printf("%zu bytes for doubles\n", sizeof(double));
    printf("%zu bytes for double variables\n", sizeof(double));
    printf("%zu bytes for pointers\n", sizeof(int *));
	printf("%zu bytes for pointer variables\n", sizeof(int *));
	char x;
	char *ptr = &x;
	printf("%zu bytes for address of char variable\n", sizeof(&x));
	printf("%zu bytes for pointer to char variable\n", sizeof(&x));
	printf("%zu byte for value stored by pointer to char variable\n", sizeof(*ptr));
	return 0;
}