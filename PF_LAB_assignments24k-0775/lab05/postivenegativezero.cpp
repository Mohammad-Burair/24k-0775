#include<stdio.h>
int main(){
	int a;
	printf("Enter any number :");
	scanf("%d",&a);
	if(a>0){
		printf("The given number is postive \n");
		if(a%2==0)
			printf("The given number is even");
		else 
			printf("The given number is odd");
	}
	else if(a<0){
		printf("The givn number is negative ");
	}
	
	else 
		printf("The number is 0 ");
	return 0;
}
