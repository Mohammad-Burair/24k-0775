#include <stdio.h>
#include <string.h>

#define maxlength 100

void concatenate_strings(char *destination, const char *source, int n) {
    strncat(destination, source, n);
}

int main() {
    char destination[maxlength];
    char source[maxlength];
    int n;

    printf("Enter the destination string: ");
    fgets(destination, maxlength, stdin);
    destination[strcspn(destination, "\n")] = 0;

    printf("Enter the source string: ");
    fgets(source, maxlength, stdin);
    source[strcspn(source, "\n")] = 0;

    printf("Enter the number of characters to append from the source: ");
    scanf("%d", &n);

    concatenate_strings(destination, source, n);
    printf("New concatenated string: %s\n", destination);

    return 0;
}