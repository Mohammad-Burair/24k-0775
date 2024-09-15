/*
 *Name: Mohammad Burair 
 *Date: 15/september/2024
 *Description: Simple calculator which input two operands and one operator and print the result of that operation
*/
#include<stdio.h>
int main(){
  int price;
  float discountprice;
  printf("Enter the price of item:");
  scanf("%d",&price);

  if(price>500 && price<2000)
    discountprice=price*0.95;

  else if(price>=2000 && price<4000)
   discountprice=price*0.90;

  else if(price>=4000 && price<6000)
   discountprice=price*0.8;

  else if(price>=6000)
   discountprice=price*0.65;

  else 
    printf("Error");

  printf("The original amount :%d\n",price);
  printf("Price after discount:%f",discountprice);
  return 0;
}