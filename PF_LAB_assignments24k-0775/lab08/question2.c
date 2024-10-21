#include<stdio.h>
int main(){

    int i , j , height , width ;

    printf("Enter the number of rows in the matrix :");
    scanf("%d",&height);

    printf("Enter the number of column in the matrix :");
    scanf("%d",&width);

    int arr[height][width];

    for(i = 0; i < height; i++){
        for(j = 0;  j < width; j++){
            printf("Enter the %d row and %d column number :", i+1 , j+1);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The original matrix :\n");
    for(i = 0; i < height; i++){
        for(j = 0;  j < width; j++){
           printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("The Transpose of the matrix :\n");
    for(i = 0; i < height; i++){
        for(j = 0;  j < width; j++){
           printf(" %d ", arr[j][i]);
        }
        printf("\n");
    }
 
    return 0;
}