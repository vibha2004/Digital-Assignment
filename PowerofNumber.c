#include <stdio.h>

int power(int x, int n);

int main()
{
    int x, n;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n : ");
    scanf("%d", &n);

    int result = power(x, n);

    printf("%d\n", result);

    return 0;
}

int power(int x, int n)
{
    if (n == 0) { // base case: x^0 = 1
        return 1;
    } else if (n == 1) { // base case: x^1 = x
        return x;
    } else { // recursive case: x^n = x * x^(n-1)
        return x * power(x, n-1);
    }
}
