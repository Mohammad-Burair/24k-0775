#include<stdio.h>

int main(){

    int i , j , height , width;

    printf("Enter the height of the rigt trianlge: \n");
    scanf("%d",&height);


    for(i = 0; i <= height; i++){
        for(j = 0; j <= height; j++){
            if(i>j){
                printf("%d",j+1);
            }
        }
        printf("\n");
    }
    return 0;
}
