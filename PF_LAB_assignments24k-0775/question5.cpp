#include<stdio.h>
/*
	*PF-LAB assignment 3 question 5*
	*Name : Mohammad Burair 
	*Roll number : 24k-0775
	*To calculate simple interest 
*/
int main(){
	float principle_amount , interest_rate , time_period , interest;
	
	printf("Enter principle amount for interest, between 100 and 1,000,000 :");
	scanf("%f",&principle_amount);// taking principle amount as input
	
	printf("Enter interest rate, between 5 and 10 percent :");
	scanf("%f",&interest_rate);// taking interest rate as input 
	
	printf("Enter time period, between 1 year and 10 years:\n");
	scanf("%f",&time_period);// taking time period as input 
	
	interest=principle_amount*(interest_rate/100)*time_period;// calculating interest (simple)
	
	printf("Simple Interest on %.2f after %.2f years with interest rate %.2f will be %.f :",principle_amount,time_period,interest_rate,interest);
	
	return 0;//returning 0 because return datatype of main function is integer
	
}//Main function ends

