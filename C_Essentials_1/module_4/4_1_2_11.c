#include <stdio.h>

int main()
{
	char letters[26];
	
	for (int i = 0; i < 26; i++) {
        letters[i] = 'a' + i;
    }
	
    for (int i = 25; i >= 1; i--) {
        printf("%c\n", letters[i]);
    }
	
	// g is at index 6, r is at 17, e is at 4, a is at 0, t is at 19
    printf("%c%c%c%c%c\n", letters[6], letters[17], letters[4], letters[0], letters[19]);
	
	return 0;
}

