#include <string.h>
#include <stdio.h>
#include <stdlib.h>
struct product{
    int code;
    char name[20];
    float price;
    int quantity;
};

int main() {
    struct product product1, product2;
    //product 1 details
    product1.code = 101;
    strcpy(product1.name, "Laptop");
    product1.price = 1200.50;
    product1.quantity = 10;

    printf("enter product code:\n");
    scanf("%d", &product1.code);
    printf("enter product name:\n");
    scanf(" %[^\n]", product1.name); // To read full name with spaces
    printf("enter product price:\n");
    scanf("%f", &product1.price);
    printf("enter product quantity:\n");
    scanf("%d", &product1.quantity);
    
    printf("Product Details:\n");
    printf("Code: %d\n", product1.code);
    printf("Name: %s\n", product1.name);
    printf("Price: %.2f\n", product1.price);
    printf("Quantity: %d\n", product1.quantity);

    printf("Total Value of Product 1: %.2f\n", product1.price * product1.quantity);
}