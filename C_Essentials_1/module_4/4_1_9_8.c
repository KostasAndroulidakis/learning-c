#include <stdio.h>

int main()
{
    char ipAddress[17];
    char error[] = "Error: not a valid address.\n";

    scanf("%s", ipAddress);

    int i;
    int dotCounter = 0;
    int digitCounter = 0;
    int dotPositions[3];

    for(i=0; ipAddress[i] != '\0'; i++)
    {
        if (!(ipAddress[i] >= '0' && ipAddress[i] <= '9') && ipAddress[i] != '.')
        {
            printf("%s", error);
            return 0;
        }

        if (ipAddress[i] >= '0' && ipAddress[i] <= '9') {
            digitCounter += 1;
            // Check if we have too many digits (more than 3)
            if (digitCounter > 3) {
                printf("%s", error);
                return 0;
            }
        }

        if (ipAddress[i] == '.') {
            // Check if we had too few digits (less than 1)
            if (digitCounter < 1) {
                printf("%s", error);
                return 0;
            }
            if (dotCounter < 3) {
                dotPositions[dotCounter] = i;
            }
            dotCounter += 1;
            digitCounter = 0;
        }
    }

    // Check if we have exactly 3 dots
    if (dotCounter != 3) {
        printf("%s", error);
        return 0;
    }

    // Check if the last segment has valid digits (1-3)
    if (digitCounter < 1 || digitCounter > 3) {
        printf("%s", error);
        return 0;
    }

    printf("Last 3 parts: %s\n", &ipAddress[dotPositions[0] + 1]);
    printf("Last 2 parts: %s\n", &ipAddress[dotPositions[1] + 1]);
    printf("Last 1 part: %s\n", &ipAddress[dotPositions[2] + 1]);

    return 0;
}