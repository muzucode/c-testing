#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* label;
    char* food;
    int price;
} Order;



void printOrder(Order* order) {
    printf("Label: %s", order->label);
    printf("\n");
    printf("Food: %s", order->food);
}


Order* getOrder() {
    Order* order;
    char buf[100];


    order = (Order*)malloc(sizeof(Order));

    printf("Order label: ");
    fgets(buf, sizeof(buf), stdin);
    buf[strcspn(buf, "\n")] = '\0';

    order->label = (char*)malloc(strlen(buf) + 1);
    if(order->label == NULL) {
        perror("Malloc failed for Order Label");
        exit(1);
    }

    strcpy(order->label, buf);

    printf("Food: ");
    fgets(buf, sizeof(buf), stdin);

    order->food = (char*)malloc(strlen(buf) + 1);
    if(order->food == NULL) {
        perror("Malloc failed for Food");
        exit(1);
    }
    strcpy(order->food, buf);

    return order;

}


int main() {
    Order* order;
    order = getOrder();

    printOrder(order);

    return 0;
}