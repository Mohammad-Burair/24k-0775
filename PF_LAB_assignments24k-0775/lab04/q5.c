/*
 *Name: Mohammad Burair 
 *Date: 15/september/2024
 *Description: Bill calculator
*/
#include<stdio.h>
int main(){
	int units, customerid;
	float bill , unitprice;
	printf("Enter you customer ID :");
	scanf(" %d",&customerid);
	printf("Enter units consumed :");
	scanf(" %d",&units);
	if(units>0 && units<200)
		unitprice=16.2;
	else if(units>=200 && units<300)
		unitprice=20.1;
	else if(units>=300 && units<500)
		unitprice=27.1;
	else if(units>=500)
		unitprice=35.9;
	else 
		printf("Error");
	
	bill=units*unitprice;
	
	printf("Customer ID : %d\n",customerid);
	printf("Unis consumed :%d\n",units);
	printf("Amount charges @Rs.%.2f per unit :%.2f\n",unitprice,bill);
	
	if(bill>18000){
		printf("Surcharge amount :%.2f\n",bill*0.15);
		bill=bill*1.15;
	}
	printf("Net amount to be paid by customer :%.2f",bill);
	
	
	return 0;
}
