#include<stdio.h>
int main(){
	int a,b;
	printf("Enter two numbers :");
	scanf("%d %d", &a,&b);
	printf("The given number before swap %d and %d\n ",a,b);
	a=a^b;
	b=a^b;	
	a=a^b;
	printf("The given number after swap %d and %d ",a,b);
}
