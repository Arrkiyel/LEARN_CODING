#include <stdio.h>

int main () {

    //Declare variables
    int quantity = 60;
    float product_cost = 9.99;
    float total_cost = quantity * product_cost;
    char currency = '$';

    //Print the total value
    printf("RECEIPT\n");
    printf("Number of items: %d\n", quantity);
    printf("Cost per item: %.2f\n", product_cost);
    printf("Total cost: %.2f %c\n", total_cost, currency);
    return 0;

}