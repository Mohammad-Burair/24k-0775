#include<stdio.h>
int main(){
	int attendence, assign , exam, mids, finalM;
	printf("Enter the percentage of you attendence :\n");
	scanf("%d",&attendence);
	if(attendence<80)
		printf("Attendce less than 80%\n Grade : F");
	else{
		printf("Enter your marks in assignments out of 20:\n");
		scanf("%d",&assign);
		printf("Enter your marks in mids out of 30 :\n");
		scanf("%d",&mids);
		printf("Enter your marks in final exam out of 50 :\n");
		scanf("%d",&exam);
		finalM=exam+mids+assign;
		
		if(finalM>90)
			printf("Grade A+ \n");
		else if (finalM>86)
			printf("Grade A \n");
		else if (finalM>82)
			printf("Grade A- \n");
		else if (finalM>78)
			printf("Grade B+ \n");
		else if (finalM>74)
			printf("Grade B \n");
		else if (finalM>70)
			printf("Grade B- \n");
		else if (finalM>66)
			printf("Grade C+ \n");
		else if (finalM>62)
			printf("Grade C \n");
		else if (finalM>58)
			printf("Grade C- \n");
		else if (finalM>54)
			printf("Grade D+ \n");
		else if (finalM>50)
			printf("Grade D \n");
		else if (finalM<50)
			printf("Grade F \n");
		else 
			printf("Error\n");
	}
	return 0;
}
