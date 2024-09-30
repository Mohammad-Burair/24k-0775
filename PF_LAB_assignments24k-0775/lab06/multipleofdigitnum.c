#include<stdio.h>
int main(){
	int a,ismultiple=0,i;
	printf("Enter any number :\n");
	scanf("%d",&a);
	for(i=2; i<=9; i++){
		if(a%i==0){
			ismultiple=1;
			break;
		}
	}
	if(ismultiple==1)
		printf("the given number is multiple of digit number\n");
	else
		printf("the given number is not the multiple of digit number \n");
	return 0;
}
