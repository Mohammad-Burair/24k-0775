/*
 *Name: Mohammad Burair 
 *Date: 15/september/2024
 *Description: Program tell weather the inputted character is upper case , lower case , digt or special charachter 
*/
#include<stdio.h>
int main(){
	char a;
	printf("Enter any character :");
	scanf("%c",&a);
	if (a>='a' && a<='z')
		printf("Lower case ");
	else if (a>='A' && a<='Z')
		printf("Upper case ");
	else if(a>='1' && a<='9')
		printf("Digit");
	else 
		printf("Special charater ");
	return 0;
}
