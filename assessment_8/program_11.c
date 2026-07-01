#include <stdio.h>

int disp_total_odd_digits(int);

int main()
{
    int x, y;

    scanf("%d", &x);

    y = disp_total_odd_digits(x);

    printf("%d", y);

    return 0;
}

int disp_total_odd_digits(int x)
{
    int digit, count = 0;

    while(x > 0)
    {
        digit = x % 10;

        if(digit % 2 != 0)
            count++;

        x = x / 10;
    }

    return count;
}