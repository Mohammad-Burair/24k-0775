#include<stdio.h>
/*
	*Name : Mohammad Burair 
	*Roll number : 24k-0775
	*Program to swap two numbers (using third variable)
*/
int main(){
	int a,b,c;
	printf("Enter any two numbers");
	scanf("%d %d",&a,&b);//Taking two numbers as input 
	 
	printf("Before swapping 1st variable is: %d and 2nd variable :is %d\n",a,b);
	
	c=a;// value of a is stored temporarily in third variable 
	a=b;// new value of a is b
	b=c;// new value of b is c(which has the value of a)
	
	printf("After swapping 1st variable is: %d and 2nd vairable is: %d\n",a,b);
	
	return 0;//returning 0 because return datatype of int function is integer
}//Main function ends

