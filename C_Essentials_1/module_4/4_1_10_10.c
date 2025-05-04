#include <stdio.h>
#include <string.h>

int main()
{
	char word[50];
	int length;

	scanf("%s", word);

	length = strlen(word);

	int i;
    char reversedWord[50];

    for (i = length - 1; i >= 0; i--)
    {
        reversedWord[length-1-i] = word[i];
    }

	printf("%s", reversedWord);

	return 0;
}