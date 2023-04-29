#include <stdio.h>

double factorial(int n) {
    if (n == 1) {
        return 1.0;
    } else {
        return factorial(n-1) * n;
    }
}

int main() {
    int n;
    double sum = 0.0;

    
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += factorial(i) / i;
    }

    printf("Sum of the series = %.2lf\n", sum);

    return 0;
}
