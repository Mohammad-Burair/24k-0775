/*
 *Name: Mohammad Burair 
 *Date: 15/september/2024
 *Description: Print the english word of digit (1-9)
*/
#include<stdio.h>
int main(){
	int a;
	printf("Enter any number 1 to 9 :");
	scanf("%d",&a);
	
	if(a>0 && a<10){
		if (a==1)
			printf("One");
		else if(a==2)
			printf("Two");
		else if (a==3)
			printf("Three");
		else if(a==4)
			printf("Four");
		else if(a==5)
			printf("Five");
		else if(a==6)
			printf("Six");
		else if(a==7)
			printf("Seven");
		else if(a==8)
			printf("Eight");
		else if(a==9)
			printf("Nine");
		else 
			printf("error");
	}
	else 
		printf("Error");
		
	return 0;
}
