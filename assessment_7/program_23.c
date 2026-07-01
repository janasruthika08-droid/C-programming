#include <stdio.h>

void disp_single_digit_square(int);

int main()
{
    int x;

    scanf("%d", &x);
    disp_single_digit_square(x);

    return 0;
}

void disp_single_digit_square(int x)
{
    int digit, count = 0;

    while(x > 0)
    {
        digit = x % 10;

        if(digit == 1 || digit == 4 || digit == 9)
            count++;

        x = x / 10;
    }
    printf("%d", count);
}