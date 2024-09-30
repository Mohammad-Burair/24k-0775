#include<stdio.h>
int main(){
	int a , count;
	printf("Enter any number :\n");
	scanf("%d",&a);
	while(a>0){
		a=a/10;
		count=count+1;
	}
	if(count==1)
		printf("the given number is single digit \n");
	else if(count>1)
		printf("the given number is multiple digit \n");
	else 
		printf("Error\n");
	return 0;
}
