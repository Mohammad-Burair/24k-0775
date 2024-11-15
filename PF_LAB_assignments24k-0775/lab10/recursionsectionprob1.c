#include<stdio.h>
int digitsum(int a){

    if(a == 0)
        return 0;

    return a%10 + digitsum(a/10);
}
int main(){
    int a , result;
    printf("Enter any number : ");
    scanf("%d",&a);
    result = digitsum(a);
    printf("The sum of digit of given number is : %d", result);
    return 0;
}
