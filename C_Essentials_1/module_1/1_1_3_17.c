#include <stdio.h> /* we included stdio.h */

int main()
{
  int SecondsInThreeHours = 3 * 60 * 60;
  int SecondsInThreeMinutes = 3 * 60;
  int SecondsInFiveMinutes = 5 * 60;
  printf("There are %d seconds in 3 hours\n", SecondsInThreeHours);
  printf("There are %d seconds in 3 minutes\n", SecondsInThreeMinutes);
  printf("There are %d seconds in 5 minutes\n", SecondsInFiveMinutes);
  return 0;
}