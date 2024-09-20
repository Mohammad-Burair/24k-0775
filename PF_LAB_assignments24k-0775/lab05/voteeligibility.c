#include<stdio.h>
int main(){
	int age , citizen;
	printf("Enter you age: \n");
	scanf("%d",&age);
	printf("Enter 1 if you are the citizen and 0 if not : \n");
	scanf("%d",&citizen);
	if(age>=18 && citizen==1){
		printf("You are eligible to vote .\n");
	}
	else
		printf("You are not eligible to vote. \n");
}
