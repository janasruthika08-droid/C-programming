#include <stdio.h>

int count_total_digits(int);

int main()
{
    int x, y;

    scanf("%d", &x);

    y = count_total_digits(x);

    printf("%d", y);

    return 0;
}

int count_total_digits(int x)
{
    int count = 0;

    while(x > 0)
    {
        count++;
        x = x / 10;
    }

    return count;
}