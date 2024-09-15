/*
 *Name: Mohammad Burair 
 *Date: 15/september/2024
 *Description: Simple calculator which input two operands and one operator and print the result of that operation
*/
#include<stdio.h>
int main(){
  int a , b;
  char op;
  printf("Enter two numbers :");
  scanf(" %d %d",&a,&b);
  printf("Enter the operatorsn :");
  scanf(" %c",&op);
  if(op=='+')
    printf("The sum of two numbers is:%d",a+b);
  else if (op=='-')
    printf("The difference of two numbers is :%d",a-b);
  else if(op=='*')
    printf("The product of two numbers is :%d",a*b);
  else if(op=='/')
    printf("The division of two numbers is :%d",a/b);
  else if(op=='%')
    printf("The remainder after division is:%d",a%b);
  else 
    printf("Error");
  return 0;
}