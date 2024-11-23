/*
* Name : Mohammad Burair 
* Roll No : 24K - 0775
* Section : BCS-1C
* Date : 23/November/2024
* Description : C program that defines a constant for the conversion factor of meters to kilometers
*               and uses a static variable to count how many times the function is called.
*/

#include<stdio.h>

#define METER_TO_KM 0.001

void convert_to_km(float meters) {
    static int count = 0;
    count++;

    float kilometers = meters * METER_TO_KM;
    printf("%.2f meters is equal to %.4f kilometers.\n", meters, kilometers);
    printf("This function has been called %d times.\n", count);
}

int main() {
    float meters;

    printf("Enter the distance in meters: \n");
    scanf("%f", &meters);

    convert_to_km(meters);

    printf("\nEnter another distance in meters: \n");
    scanf("%f", &meters);

    convert_to_km(meters);

    return 0;
}
