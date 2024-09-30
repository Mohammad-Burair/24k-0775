#include<stdio.h>
int main(){
	int a,i,isprime=1; 
	printf("Enter any number :\n");
	scanf("%d",&a);
	for(i=2;i<a;i++){
		if(a%i==0){
			isprime=0;
		}
	}

	if(a==0 || a==1)
		printf("Nor prime not composite\n");
	else if(a==2)
		printf("The given number is prime\n");
	else if(isprime==0)
		printf("The given number is not prime\n");
	else if(isprime==1)
		printf("The given number is prime \n");
	else 
		printf("Error");
	return 0;
}
