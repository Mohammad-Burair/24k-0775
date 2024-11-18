#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

struct file_info {
    int flight_number; 
    char depart_city[100];
    char dest_city[100];
    char date[100];
    int req_seats;
    int available_seat;
    int booking_number;
};

int main(){

    srand(time(NULL));  

    struct file_info flight;

    flight.available_seat = rand() % 100 + 1;

    printf("Enter the number of the flight: ");
    scanf("%d", &flight.flight_number);
    getchar();

    printf("Enter the departure city: ");
    fgets(flight.depart_city , 100 , stdin);
    flight.depart_city[strcspn(flight.depart_city , "\n")] = '\0';

    printf("Enter the destination city: ");
    fgets(flight.dest_city , 100 , stdin);
    flight.dest_city[strcspn(flight.dest_city , "\n")] = '\0';
    
    printf("Enter the date of the flight: ");
    fgets(flight.date , 100 , stdin);
    flight.dest_city[strcspn(flight.date , "\n")] = '\0';

enterseats:
    printf("Enter the number of seats required: ");
    scanf("%d",&flight.req_seats);

    printf("The seats available are : %d\n", flight.available_seat);

    if(flight.req_seats <= flight.available_seat){
        flight.booking_number = rand() % 50000 +123;
        printf("The flight is available.\n");
        printf("Your details :\n");
        printf("Flight Number: %d \n", flight.flight_number);
        printf("Your departure city : %s \n", flight.depart_city);
        printf("Your destination city : %s \n", flight.dest_city);
        printf("Your flight date : %s \n", flight.date);
        printf("Your seats : %d\n", flight.req_seats);
        printf("Your booking number : %d\n", flight.booking_number);
    }

    else {
        printf("The required seats by y ou are not available.\n");
        goto enterseats;
    }

}
