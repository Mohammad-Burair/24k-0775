#include<stdio.h>

void swapvar(int* a , int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main(){
    int a , b;

    printf("Enter two values ");
    scanf("%d %d", &a , &b);

    printf("The values of a now is : %d and b is %d \n", a , b);
    
    swapvar(&a , &b);

    printf("The values of a now is : %d and b is %d \n",a , b);

    return 0;
}