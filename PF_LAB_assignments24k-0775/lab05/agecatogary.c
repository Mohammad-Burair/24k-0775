/*
 *Name: Mohammad Burair 
 *Date: 16 september 2024
 *Description: Code to categorize a person's age into child, teenager, Adult ,and senior
*/
#include<stdio.h>
int main(){
	int age;
	printf("Enter the age :");
	scanf("%d",&age);
	if(age>0){
		if(age<13)
			printf("Child ");
		else if(age<20)
			printf("Teenager ");
		else if(age<=30)
			printf("Adult ");
		else if(age>30)
			printf("Senoir");	
	}
	else 
		printf("Error");

	
}
