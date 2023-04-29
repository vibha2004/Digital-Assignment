#include <stdio.h>
#include <string.h>

int main() {
    char input[3][3];
    char diagonal[4];
    int i, j, k = 0;

    printf("Enter the input to open the device (3x3 matrix):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf(" %c", &input[i][j]);
        }
    }

    // Concatenate diagonal characters
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == j) {
                diagonal[k] = input[i][j];
                k++;
            }
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i + j == 2) {
                diagonal[k] = input[i][j];
                k++;
            }
        }
    }
    diagonal[k] = '\0';

    // Compare with password
    if (strcmp(diagonal, "aeiceg") == 0) {
        printf("Password verification successful!\n");
    } else {
        printf("Password verification failed!\n");
    }

    return 0;
}
