#include <stdio.h>
#include <string.h>

void reverseString(char string[], int start, int end) {

    if (start >= end) {
        return;
    }

    char temp = string[start];
    string[start] = string[end];
    string[end] = temp;

    reverseString(string, start + 1, end - 1);
}

int main() {
    char arr[100];

    printf("Enter the string: ");
    fgets(arr, sizeof(arr), stdin);


    int length = strlen(arr);
    if (length > 0 && arr[length - 1] == '\n') {
        arr[length - 1] = '\0';
    }

    length = strlen(arr);

    reverseString(arr, 0, length - 1);

    printf("The reverse of the string is: %s\n", arr);

    return 0;
}
