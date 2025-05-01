#include <stdio.h>

int main(void)
{
    int dayOfWeek = 1;
    
    if (dayOfWeek == 1) {
        printf("The day of the week is: Monday");
    } else if (dayOfWeek == 2) {
        printf("The day of the week is: Tuesday");
    } else if (dayOfWeek == 3) {
        printf("The day of the week is: Wednesday");
    } else if (dayOfWeek == 4) {
        printf("The day of the week is: Thursday");
    } else if (dayOfWeek == 5) {
        printf("The day of the week is: Friday");
    } else if (dayOfWeek == 6) {
        printf("The day of the week is: Saturday");
    } else if (dayOfWeek == 7) {
        printf("The day of the week is: Sunday");
    } else {
        printf("Invalid day number");
    }
    
    return 0;
}