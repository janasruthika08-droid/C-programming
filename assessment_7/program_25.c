#include <stdio.h>

void disp_single_digit_prime(int);

int main()
{
    int x;

    scanf("%d", &x);
    disp_single_digit_prime(x);

    return 0;
}

void disp_single_digit_prime(int x)
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

    printf("%d", count);
}