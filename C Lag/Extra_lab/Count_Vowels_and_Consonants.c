#include <stdio.h>

int main() {
    char str[200];
    int i, vowels = 0, consonants = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    gets(str);   

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // check vowels
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
            vowels++;
        }
        // check consonants
        else if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) {
            consonants++;
        }
        // check digits
        else if (ch>='0' && ch<='9') {
            digits++;
        }
        // check special characters (excluding space)
        else if (ch != ' ') {
            special++;
        }
    }

    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
    printf("\nDigits: %d", digits);
    printf("\nSpecial Characters: %d", special);

    return 0;
}

