#include<stdio.h>

int maxinarray(int arr[]){
    int max = arr[0] , i;
    for(i = 0; i < 10-1; i++){
        if (arr[i] < arr[i+1])
        max = arr[i+1];
    }
    return max;
}
int mininarray(int arr[]){
    int min = arr[0] , i;
    for(i = 0; i < 10-1; i++){
        if (arr[i] > arr[i+1])
        min = arr[i+1];
    }
    return min;

}
int main(){

    int arr[10] , i;
    for (i = 0; i < 10; i++){
        printf("Enter %d Element of array : ",i+1);
        scanf("%d", &arr[i]);
    }

    int max = maxinarray(arr);
    int min = mininarray(arr);

    printf("The maximum element in array is %d \nand Minimum element in array is %d", max , min);
return 0;
}