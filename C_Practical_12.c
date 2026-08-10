 #include <stdio.h>

int main() {
    // Declare variables with clear names
    float purchase_amount, discount_rate, discount_amount, final_amount;

    // Accept purchase amount from the customer
    printf("Purchase Amount : ₹");
    scanf("%f", &purchase_amount);

    // Determine the discount rate based on the store's policy
    if (purchase_amount < 1000) {
        discount_rate = 0.0;
    } else if (purchase_amount >= 1000 && purchase_amount < 5000) {
        discount_rate = 0.10;
    } else if (purchase_amount >= 5000 && purchase_amount < 10000) {
        discount_rate = 0.20;
    } else {
        discount_rate = 0.30;
    }

    // Calculate total savings and the final amount to be paid
    discount_amount = purchase_amount * discount_rate;
    final_amount = purchase_amount - discount_amount;

    // Display the information in a neatly formatted receipt
    printf("\nShopping Summary\n\n");
    printf("Purchase Amount : ₹%.2f\n\n", purchase_amount);
    printf("Discount        : %.0f%%\n\n", discount_rate * 100);
    printf("You Saved       : ₹%.2f\n\n", discount_amount);
    printf("Amount Payable  : ₹%.2f\n", final_amount);

    return 0; // Indicate successful execution
}
