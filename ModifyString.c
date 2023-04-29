#include <stdio.h>
#include <string.h>
#include <ctype.h>

int processString(char str[]) {
    int len = strlen(str);

    // Convert first word to title case
    str[0] = toupper(str[0]);
    for (int i = 1; i < len; i++) {
        if (str[i-1] == ' ') {
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]);
        }
    }

    // Convert second word to uppercase
    char* secondWord = strchr(str, ' ') + 1;
    for (int i = 0; i < strlen(secondWord); i++) {
        secondWord[i] = toupper(secondWord[i]);
    }

    // Print revised string and length
    printf("%s\n%d\n", str, len);

    // Return string length
    if (len < 20) {
        return len;
    } else {
        return sizeof(str);
    }
}

int main() {
    char str[100];
    printf("Enter a sentence with two words: ");
    scanf("%[^\n]%*c", str);

    // Check if input has exactly two words
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (isspace(str[i])) {
            count++;
        }
    }
    if (count != 1) {
        printf("Invalid input. Please enter a sentence with two words.\n");
        return 0;
    }

    int len = processString(str);
    printf("%d\n", len);

    return 0;
}
