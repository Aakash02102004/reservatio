#include <stdio.h>

// Passenger structure
typedef struct {
    char name[50];
    int age;
    char gender;
} Passenger;

// Train structure
typedef struct {
    int train_number;
    char source[50];
    char destination[50];
    int total_seats;
} Train;

// Function to input passenger information
void input_passenger_info(Passenger *passenger) {
    printf("Enter passenger name: ");
    scanf("%s", passenger->name);

    printf("Enter passenger age: ");
    scanf("%d", &passenger->age);

    printf("Enter passenger gender (M/F): ");
    scanf(" %c", &passenger->gender);
}

// Function to display passenger information
void display_passenger_info(const Passenger *passenger) {
    printf("Passenger Name: %s\n", passenger->name);
    printf("Passenger Age: %d\n", passenger->age);
    printf("Passenger Gender: %c\n", passenger->gender);
}

// Function to input train information
void input_train_info(Train *train) {
    printf("Enter train number: ");
    scanf("%d", &train->train_number);

    printf("Enter source station: ");
    scanf("%s", train->source);

    printf("Enter destination station: ");
    scanf("%s", train->destination);

    printf("Enter total seats: ");
    scanf("%d", &train->total_seats);
}

// Function to display train information
void display_train_info(const Train *train) {
    printf("Train Number: %d\n", train->train_number);
    printf("Source: %s\n", train->source);
    printf("Destination: %s\n", train->destination);
    printf("Total Seats: %d\n", train->total_seats);
}

int main() {
    Passenger passenger;
    Train train;

    printf("== Passenger Information ==\n");
    input_passenger_info(&passenger);
    printf("\n");

    printf("== Train Information ==\n");
    input_train_info(&train);
    printf("\n");

    printf("== Passenger Details ==\n");
    display_passenger_info(&passenger);
    printf("\n");

    printf("== Train Details ==\n");
    display_train_info(&train);

    return 0;
}

