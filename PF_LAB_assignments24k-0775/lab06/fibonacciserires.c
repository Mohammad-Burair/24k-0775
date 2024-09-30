#include<stdio.h>
int main(){
	int limit , first=0 , second=1 , third, count;
	printf("Enter the number of term in fibonacci series :\n");
	scanf("%d",&limit);
	printf("\n %d \n %d",first, second);
	third=first+second;
	for(count=2;count<=limit; count++){
		printf("\n %d",third);
		first=second;
		second=third;
		third=first+second;
	}
}
