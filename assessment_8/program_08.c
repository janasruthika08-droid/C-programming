#include <stdio.h>

int disp_interchange_first_last_digit(int);

int main()
{
    int x, y;

    scanf("%d", &x);

    y = disp_interchange_first_last_digit(x);

    printf("%d", y);

    return 0;
}

int disp_interchange_first_last_digit(int x)
{
    int first, last, middle;
    int temp, power = 1;

    last = x % 10;

    temp = x;

    while(temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;

    middle = (x % power) / 10;

    return last * power + middle * 10 + first;
}