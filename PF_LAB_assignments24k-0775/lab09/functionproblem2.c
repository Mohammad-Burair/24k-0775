#include<stdio.h>

int oddeven(int a){
    if(a%2==0)
        return 1;
    else
        return 0;
    
}

int main(){
    int a , oddevenyn;
    printf("Enter any number : ");
    scanf("%d",&a);

    oddevenyn = oddeven(a);

    if (oddevenyn == 1)
        printf("The given number is even ");
    else
        printf("The given number is odd.");

    return 0;
}