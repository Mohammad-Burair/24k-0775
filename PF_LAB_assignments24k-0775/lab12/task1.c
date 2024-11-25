/*
* Name : Mohammad Burair
* Roll Number : 24K-0775
* Section : BCS-1C
* Date : 25 / November / 2024
* Desc : Program that defines a structure of student , memory for that structure is dynamically input and output is taking by userdefined function.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stdmarks{
    char stdname[100];
    float mathmarks;
    float englishmarks;
    float pfmarks;
};

void inputstructmarks(struct stdmarks *std){

    getchar();
    printf("Enter the name of the student : \n");
    fgets(std->stdname , 100 , stdin);
    std->stdname[strcspn(std->stdname , "\n")] = '\0';

    printf("Enter Student marks in maths : \n");
    scanf("%f", &(std->mathmarks));

    printf("Enter Student marks in English : \n");
    scanf("%f", &(std->englishmarks));

    printf("Enter Student marks in Programming Fundamentals : \n");
    scanf("%f", &(std->pfmarks));
}

void printstructmarks(struct stdmarks *std){
    printf("Name : %s\n", std->stdname);
    printf("Marks In : \n");
    printf("Maths : %.2f \n", std->mathmarks); 
    printf("English : %.2f \n", std->englishmarks);
    printf("Programming Fundamentals : %.2f \n", std->pfmarks);

}

int main(){
    int a;
    printf("Enter the number of students :\n");
    scanf("%d", &a);
    struct stdmarks *std = (struct stdmarks *)calloc(a , sizeof(struct stdmarks));

    if(std == NULL){
        printf("Memory not allocated\n");
        return 1;
    }

    for(int i = 0; i < a; i++){
        printf("For student %d\n", i+1);
        inputstructmarks(&std[i]);
    }
    for(int i = 0; i < a; i++){
        printf("For student %d\n", i+1);
        printstructmarks(&std[i]);
    }

    free(std);
    return 0;
}
