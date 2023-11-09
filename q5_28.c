#include <stdio.h>

// Function to change the case of an alphabet character
char changeCase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        // Convert lowercase to uppercase
        return ch - 'a' + 'A';
    } else if (ch >= 'A' && ch <= 'Z') {
        // Convert uppercase to lowercase
        return ch - 'A' + 'a';
    } else {
        // If not an alphabet character, return as is
        return ch;
    }
}

int main() {
    char alphabet;

    printf("Enter an alphabet character: ");
    scanf(" %c", &alphabet);

    char changed = changeCase(alphabet);

    printf("Changed case: %c\n", changed);

    return 0;
}
