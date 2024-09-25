#include<stdio.h>
int main(){
	int age , credit , income;
	printf("Enter your age :\n");
	scanf("%d",&age);
	printf("Enter your credit score :\n");
	scanf("%d",&credit);
	printf("Enter you income :\n");
	scanf("%d",&income);
	if(age>18 && age<=60 && credit>=500 && income>=100000)
		printf("You are eligible to take loan \n");
	else 
		printf("You are \'not\' eligile to take loan \n");
}
