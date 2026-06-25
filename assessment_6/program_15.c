#include<stdio.h>

int main()
{
    int n, temp, first, count = 0, power = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // Count digits
    while(temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    for(int i = 1; i < count; i++)
    {
        power = power * 10;
    }

    first = n / power;

    if(first % 2 != 0)
    {
        first = first - 1;
        n = (first * power) + (n % power);
    }

    printf("%d", n);

    return 0;
}