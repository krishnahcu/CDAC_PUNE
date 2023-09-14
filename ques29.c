#include <stdio.h>
#include <string.h>
void findCharOccurrences(const char *str, char target, int *count) {
    *count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            (*count)++;
        }
    }
}
void findBlankSpaces(const char *str, int *count) {
    *count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            (*count)++;
        }
    }
}
void findWordCount(const char *str, int *count) {
    *count = 0;
    int inWord = 0; 

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            if (inWord) {
                (*count)++;
                inWord = 0;
            }
        } else {
            inWord = 1; 
        }
    }
    if (inWord) {
        (*count)++;
    }
}
void findVowelCount(const char *str, int *count) {
    *count = 0;
    const char *vowels = "aeiouAEIOU"; // List of vowels

    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = 0; vowels[j] != '\0'; j++) {
            if (str[i] == vowels[j]) {
                (*count)++;
                break; // No need to check other vowels
            }
        }
    }
}

int main() {
    char inputString[100];
    char targetChar;
    int charCount = 0, spaceCount = 0, wordCount = 0, vowelCount = 0;

    printf("Enter a string: ");
    gets(inputString);

    printf("Enter a character to find its occurrences: ");
    scanf(" %c", &targetChar);
    findCharOccurrences(inputString, targetChar, &charCount);
    findBlankSpaces(inputString, &spaceCount);
    findWordCount(inputString, &wordCount);
    findVowelCount(inputString, &vowelCount);

    printf("Occurrences of '%c' in the string: %d\n", targetChar, charCount);
    printf("Number of blank spaces in the string: %d\n", spaceCount);
    printf("Number of words in the string: %d\n", wordCount);
    printf("Total number of vowels in the string: %d\n", vowelCount);

    return 0;
}
