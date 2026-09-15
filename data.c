#include <stdio.h>

int main() {
    // Variable declarations
    float height;
    double bankBalance;
    char phoneNumber[15]; // Using a string to preserve leading zeros in phone numbers

    // Prompt and read Height
    printf("Enter your height (e.g., 1.75 for meters or 175 for cm): ");
    scanf("%f", &height);

    // Prompt and read Bank Balance
    printf("Enter your bank balance in Kenya Shillings (KES): ");
    scanf("%lf", &bankBalance);

    // Prompt and read Phone Number
    printf("Enter your phone number: ");
    scanf("%s", phoneNumber);

    // Displaying the formatted output
    printf("\n===================================\n");
    printf("         USER DETAILS REPORT        \n");
    printf("===================================\n");
    printf("Height:       %.2f\n", height);
    printf("Bank Balance: KES %.2f\n", bankBalance);
    printf("Phone Number: %s\n", phoneNumber);
    printf("===================================\n");

    return 0;
}