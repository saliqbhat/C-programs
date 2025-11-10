#include <stdio.h>
int main() {
    int choice;
    float inr;
    printf("1. INR to USD\n2. INR to EUR\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter amount in INR: ");
    scanf("%f", &inr);

    switch(choice) {
        case 1: printf("USD = %.2f", inr / 83.0); break; // assuming 1 USD ≈ 83 INR
        case 2: printf("EUR = %.2f", inr / 90.0); break; // assuming 1 EUR ≈ 90 INR
        default: printf("Invalid choice");
    }
    return 0;
}
