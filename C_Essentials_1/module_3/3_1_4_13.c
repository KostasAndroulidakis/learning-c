#include <stdio.h>

int main() {
    
    int num1, num2;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    while (num1 != 0) {
        printf("Enter the second number: ");
        scanf("%d", &num2);
        
        printf("Sum: %d\n", num1 + num2);
        
        if (num1 == 99 && num2 == 0) {
            printf("Finish\n");
            break;
        }
        
        printf("Enter the first number: ");
        scanf("%d", &num1);
    }
    
    return 0;
}