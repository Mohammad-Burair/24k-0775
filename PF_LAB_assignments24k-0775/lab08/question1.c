/*

Problem Statement:
Write a C program that takes the height of a right-angled triangle as input and prints a pattern of numbers, where the numbers in each row increase from 1 up to the row number, forming a right triangle.

 Input:
 An integer `height` representing the height of the triangle.

 Output:
 A right-angled triangle pattern with numbers, where the numbers in each row increment sequentially.

Sample Output:

For `height = 5`, the output will be:
1
12
123
1234
12345
*/
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
