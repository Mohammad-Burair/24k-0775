#include<stdio.h>

void isprime(int a){
    int i;

    if(a == 1 || a == 0){
        printf("The given number is nor prime nor composite \n");
    }
    else{
        for(i = 2; i < a ; i++){
            if(a % i == 0){
                printf("The Given number is not prime\n");
                break;
            }
        }
        if(i == a){
            printf("The Given number is a prime number \n");
            return;
        }

    }
    return;

}

int main(){
    int a;

    printf("Enter any number :");
    scanf("%d",&a);

    isprime(a);

    return 0;
}