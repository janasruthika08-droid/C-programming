#include <stdio.h>

int main()
{
    int x, temp, first, last, middle, power = 1;

    printf("Enter the number: ");
    scanf("%d", &x);

    temp = x;

    while (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }

    first = x / power;
    last = x % 10;

    middle = (x % power) / 10;

    x = (last * power) + (middle * 10) + first;

    printf("%d", x);

    return 0;
}