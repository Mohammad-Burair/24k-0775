#include<stdio.h>

int product(int a , int b){
    return a*b;
}

int main(){
    
    int a , b , mul;

    printf("Enter any two numbers : ");
    scanf("%d %d",&a , &b);
    mul = product(a, b);

    printf("The product of %d and %d is %d", a, b , mul);

    return 0;
}   
