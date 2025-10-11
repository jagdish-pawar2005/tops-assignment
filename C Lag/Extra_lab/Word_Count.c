#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, words = 0;

    printf("Enter a sentence: ");
    gets(str);   // simple input (can read spaces)

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            word[j++] = str[i];  // build current word
        } else if (j > 0) {  // end of a word
            word[j] = '\0';
            words++;

            if (strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }
            j = 0; // reset for next word
        }
    }

    // check last word
    if (j > 0) {
        word[j] = '\0';
        words++;
        if (strlen(word) > maxLen) {
            strcpy(longest, word);
        }
    }

    printf("\nNumber of words = %d", words);
    printf("\nLongest word = %s", longest);
    printf("\nLength = %d", (int)strlen(longest));

    return 0;
}

