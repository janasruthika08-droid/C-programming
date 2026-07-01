#include <stdio.h>

int disp_single_digit_prime(int);

int main()
{
    int x, y;

    scanf("%d", &x);

    y = disp_single_digit_prime(x);

    printf("%d", y);

    return 0;
}

int disp_single_digit_prime(int x)
{
    int digit, count = 0;

    while(x > 0)
    {
        digit = x % 10;

        if(digit == 2 || digit == 3 ||
           digit == 5 || digit == 7)
        {
            count++;
        }

        x = x / 10;
    }

    return count;
}