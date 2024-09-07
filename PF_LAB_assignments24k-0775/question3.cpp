#include<stdio.h>
/*
	*PF-LAB assignment 2 question 3*
	*Name : Mohammad Burair 
	*Roll number : 24k-0775
	*Tax and salary calculator
*/
int main(){
	float tax_rate , g_salary , total_tax , payable_salary;// declaring variable
	printf("Enter your the tax in your country/region :");
	scanf("%f",&tax_rate); // Taking tax rate input
	
	printf("Enter your Gross salary  :");
	scanf("%f",&g_salary); // Taking gross salary input
	
	total_tax=(tax_rate/100)*g_salary; //calculating tax
	
	payable_salary=g_salary-total_tax; //calculating net pay or payable salary
	
	printf("Total tax that you have to pay is :%.2f\n",total_tax);
	printf("Total salary you will get after tax deduction :%.2f\n",payable_salary);
	
	return 0;//returning 0 because return datatype of main function is integer
	
}//Main function ends

