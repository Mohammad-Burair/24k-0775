/*
*Name : Mohammad Burair
*Section : BCS-1
*Roll Number : 24K-0775
*Program to print the element of array using recursion 
*/
#include<stdio.h>
#include<stdlib.h>

void printarray(int arr[] , int size){

    if(size == 0){
        return;
    }

    printf("%d ," ,arr[size-size]);
    printarray(arr + 1 , size-1);
    return;
}

int main(){
    int a;
    printf("Enter the size of array :", &a);
    scanf("%d", &a);

    int *arr = malloc(sizeof(int)*a);

    if(arr == NULL){
        printf("Memory not allocated");
        exit(0);
    }

    else {
        for (int i = 0; i < a; i++) {
            printf("Enter the element %d of array :", i+1);
            scanf("%d", &arr[i]);
        }
    }

    printarray(arr , a);
    free(arr);

    return 0;
}
