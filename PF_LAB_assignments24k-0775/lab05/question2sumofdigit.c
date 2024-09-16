#include<stdio.h>
int main(){
	int a, sum;
	printf("Enter any number :");
	scanf("%d",&a);
	sum=0;
	while(a>0){
		sum=sum+a%10;
		a=a/10;
	}
	printf("The sum is :%d",sum);
	return 0;
}
