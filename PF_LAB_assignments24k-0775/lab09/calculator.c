#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void sum(void){
    int a , b;

    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    printf("Sum of %d and %d is %d",a,b,a+b);
}
void diff(void){
    int a , b;

    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    printf("Difference of %d and %d is %d",a,b,a-b);
}
void mul(void){
    int a , b;

    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    printf("Product of %d and %d is %d",a,b,a*b);
}
void divide(void){
    int a , b;

    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    if (b == 0){
        printf("Denominator is zero , so division not possible\n");
    }
    else {
        printf("Division of %d and %d is %d",a,b,a/b);
    }
}
void mod(void){
    int a , b;

    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    if (b == 0){
        printf("Mod of zero not possible\n");
    }
    else {
        printf("Mod of %d and %d is %d",a,b,a%b);
    }
}
int main(){
    int choice;
    while(1){
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Modulus\n");
        printf("6.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        if(choice == 1)
            sum();

        else if (choice == 2)
            diff();
        
        else if (choice == 3)
            mul();
        
        else if (choice == 4)
            divide();
        
        else if (choice == 5)
            mod();
        
        else if (choice == 6)
            break;

        else 
            printf("Enter a valid choice\n");

        getch();
        system("cls");
    }
    return 0;
}