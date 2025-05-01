#include <stdio.h>

int main() {
    int number;
    int i, j; // Loop counters

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // --- Constraint Handling ---
    // If number is less than or equal to 1, print nothing and exit.
    if (number <= 1) {
        return 0; // Exit the program successfully
    }

    // If number is greater than 20, cap it at 20.
    if (number > 20) {
        number = 20;
    }

    // --- Print Top Half ---
    // Outer Loop 1: Iterates from line 0 to number - 1
    for (i = 0; i < number; i++) {
        if (i == 0) {
            // Special case for the very first line
            printf("**\n");
        } else {
            // Print the starting '*'
            printf("*");
            // Inner Loop 1: Print 'i' spaces
            for (j = 0; j < i; j++) {
                printf(" ");
            }
            // Print the ending '*' and a newline
            printf("*\n");
        }
    }

    // --- Print Bottom Half ---
    // Outer Loop 2: Iterates to create lines mirroring lines number-1 down to 1
    // We use 'i' to represent the number of spaces needed, counting down.
    for (i = number - 1; i >= 1; i--) {
        // Print the starting '*'
        printf("*");
        // Inner Loop 2: Print 'i' spaces
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        // Print the ending '*' and a newline
        printf("*\n");
    }

    // Print the very last line (which is always '**')
    // This corresponds to mirroring the first line (i=0)
    printf("**\n");

    return 0; // Indicate successful execution
}