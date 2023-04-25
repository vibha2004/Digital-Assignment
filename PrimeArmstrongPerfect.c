#include <stdio.h>
#include <math.h>

int Prime(int num);
int Armstrong(int num);
int Perfect(int num);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (Prime(num)) {
        printf("%d is prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }
    if (Armstrong(num)) {
        printf("%d is a armstrong number\n", num);
    } else {
        printf("%d is not a armstrong number\n", num);
    }
    if (Perfect(num)) {
        printf("%d is a perfect number\n", num);
    } else {
        printf("%d is not a perfect number\n", num);
    }
    return 0;
}

int Prime(int num) {
    
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int Armstrong(int num) {
    int sum = 0, originalNum = num;
    while (num != 0) {
        int rem = num % 10;
        sum += pow(rem, 3);
        num /= 10;
    }
    return (sum == originalNum);
}

int Perfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}
