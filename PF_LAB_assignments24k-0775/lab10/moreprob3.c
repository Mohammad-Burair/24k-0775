/*
* Name : Mohammad Burair 
* Roll Number : 24K - 0775
* Section : BCS-1C
* Date : 23/ November / 2024
* Desc : Program that defines the max value of temperature and ask the use to input some values , if the values exceeds the limit it increases the value of static varaible 
*/
#include <stdio.h>

#define MAX_TEMP 30.0


void check_temperature(float temp) {
    static int count = 0; 

    if (temp > MAX_TEMP) {
        count++;
        printf("Temperature %.2f C exceeds the maximum allowable limit of %.2f C.\n", temp, MAX_TEMP);
    } else {
        printf("Temperature %.2f C is within the allowable limit.\n", temp);
    }

    
    printf("Total exceedances so far: %d\n", count);
}

int main() {
    int n; 
    printf("Enter the number of temperature readings: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        float temp;
        printf("Enter temperature reading %d: ", i + 1);
        scanf("%f", &temp);
        check_temperature(temp);
    }

    return 0;
}
