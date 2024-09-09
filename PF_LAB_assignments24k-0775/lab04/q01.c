/*
 *Name : Mohmmad Burair 
 *Date : 09 sept 24
 *Discription : The program checks weather the entered number is multiple of 3 or not.
*/
#include<stdio.h>
int main(){
  int a;
  printf("Enter any number :");
  scanf("%d",&a);
  if(a%3==0){
    printf("The given number is multiple of 3");
  }//if ends
  else 
    printf("The given number is not the multiple of 3");
  return 0;
}// main ends

