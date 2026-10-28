 #include <stdio.h>

int main() {
    int customers; 
    int i;
    int discountCustomers = 0;
    float purchase, discount, finalAmount;
    float totalSales = 0;

    printf("Enter the number of customers: ");
    scanf("%d", &customers);

    for (i = 1; i <= customers; i++) {
        printf("\nCustomer %d\n", i);

        printf("Enter purchase amount: ");
        scanf("%f", &purchase);

        if (purchase >= 1000) {
            discount = purchase * 0.10;
            discountCustomers++;
        } else {
            discount = 0;
        }

        finalAmount = purchase - discount;
        totalSales  = finalAmount;

        printf("Purchase Amount: %.2f\n", purchase);
        printf("Discount: %.2f\n", discount);
        printf("Final Amount: %.2f\n", finalAmount);
    }

    printf("\n===== DAILY SALES SUMMARY =====\n");
    printf("Total Sales After Discounts: %.2f\n", totalSales);
    printf("Customers Who Received Discounts: %d\n",
           discountCustomers);

    return 0;
}