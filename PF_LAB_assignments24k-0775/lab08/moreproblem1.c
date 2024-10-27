#include<stdio.h>
int main(){

    int start , end , i , j , isprime = 1 ;

    printf("Enter the starting number: \n");
    scanf("%d",&start);

    printf("Enter the ending number: \n");
    scanf("%d",&end);

    for(i = start ; i <= end; i++){
        for(j = 2; j < i; j++){
            isprime=1;
            if(i%j == 0){
                isprime = 0;
                break;
            }
        }
        if(isprime == 1){
            printf(" %d ", i);
        } 
    }

    return 0;
}
