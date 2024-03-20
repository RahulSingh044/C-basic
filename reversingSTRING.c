#include <stdio.h>
#include <string.h>

// Function to reverse a word in the string
void reverseWord(char* start, char* end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

// Function to reverse individual words in the string
void reverseStringWords(char* str) {
    char* wordStart = str;
    char* temp = str; // To traverse the string

    while (*temp) {
        temp++;
        if (*temp == '\0') {
            reverseWord(wordStart, temp - 1);
        } else if (*temp == ' ') {
            reverseWord(wordStart, temp - 1);
            wordStart = temp + 1;
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Removing the newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Function call to reverse individual words
    reverseStringWords(str);

    printf("Reversed string with individual words: %s\n", str);

    return 0;
}

