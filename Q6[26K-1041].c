#include <stdio.h>

struct Product {
    char name[50];
    float price;
};

struct Address {
    char city[50];
    int houseNumber;
};

struct Order {
    int orderId;
    struct Product item;
    struct Address delivery;
};

int main() 
{
    struct Order o;

    printf("Enter order ID: ");
    scanf("%d", &o.orderId);

    printf("Enter product name and price: ");
    scanf("%s %f", o.item.name, &o.item.price);

    printf("Enter city and house number: ");
    scanf("%s %d", o.delivery.city, &o.delivery.houseNumber);

    float total = o.item.price + (o.item.price * 0.05);

    printf("\n--- Order Summary ---\n");
    printf("Order #%d\n", o.orderId);
    printf("Product: %s\n", o.item.name);
    printf("Deliver to: House %d, %s\n", o.delivery.houseNumber, o.delivery.city);
    printf("Total (with delivery): %.2f\n", total);

    return 0;
}

