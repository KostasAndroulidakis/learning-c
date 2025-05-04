#include <stdio.h>

int main()
{
	float numbers[10] = {5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9};
	int size = sizeof(numbers)/sizeof(numbers[0]);
	
	for(int i = 0; i < size - 1; i++)
	{
	    for(int j = 0; j < size - i - 1; j++)
	    {
	        if(numbers[j] < numbers[j+1])
	        {
	            float temp = numbers[j];
	            numbers[j] = numbers[j+1];
	            numbers[j+1] = temp;
	        }
	    }
	    // Print all elements after each pass
        for(int k = 0; k < size; k++) {
            printf("%.2f ", numbers[k]);
        }
        printf("\n"); // Add a newline after printing all elements
	}
	
	return 0;
}