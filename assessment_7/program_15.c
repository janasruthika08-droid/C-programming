#include <stdio.h>

void check_last_digit_odd(int);

int main()
{
    int x;

    scanf("%d", &x);
    check_last_digit_odd(x);

    return 0;
}

void check_last_digit_odd(int x)
{
    int temp = x;
    int first;
    int pow10 = 1;

    while(temp >= 10)
    {
        temp = temp / 10;
        pow10 = pow10 * 10;
    }

    first = temp;

    if(first % 2 != 0)
    {
        x = x - pow10;
    }

    printf("%d", x);
}