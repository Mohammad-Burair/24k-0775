#include <stdio.h>
#include <string.h>

void stringreverse(char arr[], char result[], int length) {
    for (int i = 0; i < length; i++) {
        result[i] = arr[length - 1 - i];
    }
    result[length] = '\0'; 
}

int main() {
    char arr[101];
    char reversed[101]; 
    printf("Enter any string value (max 100 characters): ");
    fgets(arr, sizeof(arr), stdin); 

    int len = strlen(arr);
    
    if (len > 0 && arr[len - 1] == '\n') {
        arr[len - 1] = '\0';
    }

    stringreverse(arr, reversed, strlen(arr));
    printf("The reverse of the given string is: %s\n", reversed);

    return 0;
}