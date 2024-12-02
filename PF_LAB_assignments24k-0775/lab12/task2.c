/*
    *Name : Mohammad Burair 
    *Roll No : 24K-0775
    *Section : BCS-1C
    *Desc : Program to find the product of two matrices , both the matrices ary dynamincally allocated
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int r1 , c1 , r2, c2;
    printf("\nEnter the Number of rows in the first matrix :");
    scanf("%d" , &r1);
    printf("\nEnter the Number of columns in the first matrix :");
    scanf("%d" , &c1);
    printf("\nEnter the Number of rows in the second matrix :");
    scanf("%d" , &r2);
    printf("\nEnter the Number of columns in the second matrix :");
    scanf("%d" , &c2);

    if(r1 != c2){
        printf("\nThese matrices can't be multiplied");
        exit(1);
    }
    int **mar1 = (int **)calloc(r1 , sizeof(int *));
    for(int i = 0; i < r1; i++){
        mar1[i] = (int *)calloc(c1 , sizeof(int));
    }

    if(mar1 == NULL){
        printf("\nMemory not allocated");
        exit(1);
    }

    int **mar2 = (int **)calloc(r2 , sizeof(int *));
    for(int i = 0; i < r2; i++){
        mar2[i] = (int *)calloc(c2 , sizeof(int));
    }

    if(mar2 == NULL){
        printf("\nMemory not allocated");
        exit(1);
    }

    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            printf("\nEnter the element at position [%d][%d] of the first matrix : ", i+1 , j+1);
            scanf("%d" , &mar1[i][j]);
        }
    }
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            printf("\nEnter the element at position [%d][%d] of the second matrix : ", i+1 , j+1);
            scanf("%d" , &mar2[i][j]);
        }
    }
    printf("The first matrix is :\n");
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            printf("%-4d" , mar1[i][j]);
        }
        printf("\n");
    }
    printf("The first matrix is :\n");
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            printf("%-4d" , mar2[i][j]);
        }
        printf("\n");
    }

    int **mar3 = (int **)calloc(r1 , sizeof(int *));
    for(int i = 0; i < r1; i++){
        mar3[i] = (int *)calloc(c2 , sizeof(int));
    }
    if(mar3 == NULL){
        printf("\nMemory not allocated");
        exit(1);
    }

    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            for(int k = 0; k < c1; k++){
                mar3[i][j] += mar1[i][k] * mar2[k][j];
            }
        }
    }
    printf("The product of the two matrices is :\n");
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            printf("%-4d" , mar3[i][j]);
        }
        printf("\n");
    }
    
    free(mar1);
    free(mar2);
    free(mar3);
    return 0;
}
