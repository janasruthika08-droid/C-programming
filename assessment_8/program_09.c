#include <stdio.h>

int check_last_digit_odd(int);

int main()
{
    int x, y;

    scanf("%d", &x);

    y = check_last_digit_odd(x);

    printf("%d", y);

    return 0;
}

int check_last_digit_odd(int x)
{
    int first, temp, p = 1;

    temp = x;

    while(temp >= 10)
    {
        temp = temp / 10;
        p = p * 10;
    }

    first = temp;

    if(first % 2 != 0)
        x = x - p;

    return x;
}