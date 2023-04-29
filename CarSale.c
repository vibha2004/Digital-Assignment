#include <stdio.h>
#include <string.h>

int main() {
    char car_type[20];
    float price, fitting_price, total, discount, gst, net;

    printf("Enter the type of car (Hatchback, Sedan, SUV, or MUV): ");
    scanf("%s", car_type);

    if (strcmp(car_type, "Hatchback") == 0) {
        printf("Enter the price of the car: ");
        scanf("%f", &price);

        printf("Enter the extra fitting price of the car: ");
        scanf("%f", &fitting_price);

        total = price + fitting_price;
        discount = total * 0.03;
        gst = (total - discount) * 0.12;
        net = total - discount + gst;

        printf("Net amount to be paid: Rs. %.2f\n", net);
    } else if (strcmp(car_type, "Sedan") == 0) {
        printf("Enter the price of the car: ");
        scanf("%f", &price);

        printf("Enter the extra fitting price of the car: ");
        scanf("%f", &fitting_price);

        total = price + fitting_price;
        discount = total * 0.05;
        gst = (total - discount) * 0.12;
        net = total - discount + gst;

        printf("Net amount to be paid: Rs. %.2f\n", net);
    } else if (strcmp(car_type, "SUV") == 0) {
        printf("Enter the price of the car: ");
        scanf("%f", &price);

        printf("Enter the extra fitting price of the car: ");
        scanf("%f", &fitting_price);

        total = price + fitting_price;
        discount = total * 0.10;
        gst = (total - discount) * 0.12;
        net = total - discount + gst;

        printf("Net amount to be paid: Rs. %.2f\n", net);
    } else if (strcmp(car_type, "MUV") == 0) {
        printf("Enter the price of the car: ");
        scanf("%f", &price);

        printf("Enter the extra fitting price of the car: ");
        scanf("%f", &fitting_price);

        total = price + fitting_price;
        discount = total * 0.15;
        gst = (total - discount) * 0.12;
        net = total - discount + gst;

        printf("Net amount to be paid: Rs. %.2f\n", net);
    } else {
        printf("Invalid Type\n");
    }

    return 0;
}
