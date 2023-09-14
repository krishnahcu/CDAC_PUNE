#include <stdio.h>

// Function to print a line of characters
void charLine(char ch, int length) {
    for (int i = 0; i < length; i++) {
        putchar(ch);
    }
    printf("\n");
}

int main() {
    // Table headers
    printf("Data Type\tSize in Bytes\n");

    // Integer row
    printf("Integer\t\t4\n");
    charLine('-', 18); // Print a line of dashes

    // Character row
    printf("Character\t1\n");
    charLine('-', 18); // Print a line of dashes

    // Float row
    printf("Float\t\t4\n");
    charLine('-', 18); // Print a line of dashes

    return 0;
}
