#include<stdio.h>
int main(){
	char a , encryp , decryp;
	int b;
	printf("Enter any character :\n");
	scanf("%c",&a);
	printf("Entery any num :\n");
	scanf("%d",&b);
	encryp=a^b;
	printf("The encrypted character is :%c\n",encryp);
	decryp=encryp^b;
	printf("The decrypted character is :%c\n",decryp);
	return 0;
}
