#include <stdio.h>

int disp_single_digit_square(int);

int main()
{
    int x, y;

    scanf("%d", &x);

    y = disp_single_digit_square(x);

    printf("%d", y);

    return 0;
}

int disp_single_digit_square(int x)
{
    int digit, count = 0;

    while(x > 0)
    {
        digit = x % 10;

        if(digit == 1 || digit == 4 || digit == 9)
            count++;

        x = x / 10;
    }

    return count;
}