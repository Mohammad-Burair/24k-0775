#include<stdio.h>
int main(){
	int a;
	printf("Enter any number :");
	scanf("%d",&a);
	if(a%3==0 && a%5==0)
		printf("The given number is divisble 3 and 5");
	else 
		printf("The given number is not divisible by 3 and 5");
	return 0;
}
