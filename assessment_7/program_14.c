#include <stdio.h>

void disp_interchange_first_last_digit(int);

int main()
{
    int x;

    scanf("%d", &x);
    disp_interchange_first_last_digit(x);

    return 0;
}

void disp_interchange_first_last_digit(int x)
{
    int first, last, middle, temp, digits = 0, pow10 = 1;

    last = x % 10;

    temp = x;
    while(temp >= 10)
    {
        temp = temp / 10;
        digits++;
        pow10 = pow10 * 10;
    }

    first = temp;

    middle = (x % pow10) / 10;

    int result = last * pow10 + middle * 10 + first;

    printf("%d", result);
}