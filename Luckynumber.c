#include<stdio.h>

int digit_sum(int x);

int main()
{
    int s = 0;
    int i;

    for(i = 1000; i <= 9999; i++)
    {
        if(i % 2 == 0)
        {
            s += i;
        }
    }
   

    printf("%d\n", digit_sum(s));

    return 0;
}

int digit_sum(int x)
{
    int n;
    int s1 = 0;

    while(x > 0)
    {
        n = x % 10;
        x = x / 10;
        s1 += n;
    } 

    if(s1 >= 10)
    {
        return digit_sum(s1);
    }
    else
    {
        return s1;
    }
}
