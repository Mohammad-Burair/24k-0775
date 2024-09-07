#include<stdio.h>
/*
	*PF-LAB assignment 3 question 1*
	*Name : Mohammad Burair 
	*Roll number : 24k-0775
	*Reason why a value inside int variable in not printing correctly  
*/
int main(){
	int a=3000000000;
	printf("%d",a);// The value of a which is declared above will not be printed because it out of the range of integer variable 
	return 0;//returning 0 because return datatype of main function is integer
	
}//Main function ends

