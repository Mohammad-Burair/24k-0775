/*
* Name : Mohammad Burair 
* Roll No : 24K - 0775
* Section : BCS-1C
* Date : 23/November/2024
* Description : C program that implements a recursive linear search function to search for a target 
*               element in an array, where the array is dynamically allocated and filled by user input.
*/

#include<stdio.h>
#include<stdlib.h>

int linearSearch(int *arr, int size, int target, int index) {
    if (index == size) {
        return -1; 
    }
    if (arr[index] == target) {
        return index;
    }
    return linearSearch(arr, size, target, index + 1);
}

int main() {
    int size, target;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the target element to search for: ");
    scanf("%d", &target);

    int result = linearSearch(arr, size, target, 0);

    if (result != -1) {
        printf("Target found at index %d\n", result);
    } else {
        printf("Target not found in the array\n");
    }

    free(arr);

    return 0;
}
