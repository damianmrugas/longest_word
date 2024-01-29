/*

C program to find the length of the longest word in a given string.

*/

#include <stdio.h>
#include <string.h>

int longest_word(char * str) {
    int max = 0;
    int counter = 0;
    int length = strlen(str);
    int i;

    for (i = 0; i < length; i++) {
        if (str[i] != ' ') {
            counter++;
        } else {
            if (counter > max) {
                max = counter;     
            };
            counter = 0;
        };
    };

    // Check the last word.
    if (counter > max) {
        max = counter;
    };

    return max;
};

int main(void) {

    char str[] = "The quick brown fox jumped over the lazy dog";
    int result = longest_word(str);

    printf("Result: %d\n", result);

    return 0;
};
