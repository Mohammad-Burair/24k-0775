#include<stdio.h>
/*
	*PF-LAB assignment 3 question 4*
	*Name : Mohammad Burair 
	*Roll number : 24k-0775
	*Fuel price and consumption calculator
*/
int main(){
	int distance_AB=1207 , distance_BA=1207 , fuel_price_AB=118 , fuel_price_BA=123;
	float fuel_avg_AB, fuel_avg_BA, fuel_cost_AB, fuel_cost_BA, fuel_comp_AB, fuel_comp_BA, total_cost, total_fuel;
	
	printf("Enter the fuel average for the trip from A to B (positive): ");
	scanf("%f",&fuel_avg_AB); // taking fuel average from A to B as a input
	
	printf("Enter the fuel average for the trip from B to A (postive): ");
	scanf("%f",&fuel_avg_BA); // taking fuel average from A to B as a input
	
	fuel_comp_AB=fuel_avg_AB*distance_AB;// fuel consumption from A to B
	fuel_comp_BA=fuel_avg_BA*distance_BA;// fuel consumption from B to A
	
	total_fuel=fuel_comp_AB+fuel_comp_BA;// total fuel consumption
	
	fuel_cost_AB=fuel_comp_AB*fuel_price_AB;// fuel price from A to B 
	fuel_cost_BA=fuel_comp_BA*fuel_price_BA;// fuel price from B to A
	
	total_cost=fuel_cost_AB+fuel_cost_BA;// total fuel price
	
	printf("Total fuel comsumption :%.2f\n",total_fuel);
	printf("Fuel cost from A to B :%.2f\n",fuel_cost_AB);
	printf("Fuel cost from B to A :%.2f",fuel_cost_BA);
	printf("Total fuel cost :%.2f",total_cost);
	
	return 0;//returning 0 because return datatype of main function is integer
	
}//Main function ends

