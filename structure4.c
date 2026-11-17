#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct patient{
    int id;
    char name[20];
    int age;
    float temperature;
    int number_of_days;
};

int main() {
    struct patient patient1, patient2;
    //patient 1 details
    patient1.id = 101;
    strcpy(patient1.name, "John Doe");
    patient1.age = 30;
    patient1.temperature = 98.6;
    patient1.number_of_days = 5;

    printf("enter patient id:\n");
    scanf("%d", &patient1.id);
    printf("enter patient name:\n");
    scanf(" %[^\n]", patient1.name); // To read full name with spaces
    printf("enter patient age:\n");
    scanf("%d", &patient1.age);
    printf("enter patient temperature:\n");
    scanf("%f", &patient1.temperature);
    printf("enter number of days patient has been admitted:\n");
    scanf("%d", &patient1.number_of_days);

    printf("Patient Details:\n");
    printf("ID: %d\n", patient1.id);
    printf("Name: %s\n", patient1.name);
    printf("Age: %d\n", patient1.age);
    printf("Temperature: %.1f\n", patient1.temperature);
    printf("Number of Days: %d\n", patient1.number_of_days);
    
    printf("cost of accommodation per day is 2500\n");
    float total_cost = patient1.number_of_days * 2500;
    printf("Total Cost for Patient 1: %.2f\n", total_cost);

    //patient2 details
    patient2.id = 102;
    strcpy(patient2.name, "Jane Smith");
    patient2.age = 25;
    patient2.temperature = 99.0;
    patient2.number_of_days = 3;

    printf("enter patient id:\n");
    scanf("%d", &patient2.id);
    printf("enter patient name:\n");
    scanf(" %[^\n]", patient2.name); // To read full name with spaces
    printf("enter patient age:\n");
    scanf("%d", &patient2.age);
    printf("enter patient temperature:\n");
    scanf("%f", &patient2.temperature);
    printf("enter number of days patient has been admitted:\n");
    scanf("%d", &patient2.number_of_days);

    printf("Patient Details:\n");
    printf("ID: %d\n", patient2.id);
    printf("Name: %s\n", patient2.name);
    printf("Age: %d\n", patient2.age);
    printf("Temperature: %.1f\n", patient2.temperature);
    printf("Number of Days: %d\n", patient2.number_of_days);

    

    printf("cost of accommodation per day is 2500\n");
    float total_cost2 = patient2.number_of_days * 2500;
    printf("Total Cost for Patient 2: %.2f\n", total_cost2);

return 0;
}