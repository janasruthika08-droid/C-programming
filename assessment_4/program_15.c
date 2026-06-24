#include <stdio.h>

int main()
{
    int x, temp, first, power = 1;

    printf("Enter the number: ");
    scanf("%d", &x);

    temp = x;

    while (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }

    first = x / power;

    if (first % 2 == 0)
    {
        printf("%d", x);
    }
    else
    {
        x = x - power;

        printf("%d", x);
    }

    return 0;
}