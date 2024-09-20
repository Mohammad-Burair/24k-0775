#include<stdio.h>
int main(){
	int a;
	printf("Enter any number :\n");
	scanf("%d",&a);
	a>0?printf("Number is Positive\n"):a==0?printf("The number is 0"):printf("Number is negative");
}
