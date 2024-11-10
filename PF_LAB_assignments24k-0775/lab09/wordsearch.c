#include <stdio.h>
#include <string.h>

#define ROWS 5
#define COLS 20

int main() {
    char words[ROWS][COLS] = {
        "burair",
        "mohammad",
        "ali",
        "rahim",
        "maaz"
    };
    char input[COLS];
    int found = 0;

    printf("Enter a word: ");
    scanf("%s", input);

    for (int i = 0; i < ROWS; i++) {
        if (strcmp(words[i], input) == 0) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    }

    return 0;
}