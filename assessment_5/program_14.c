#include<stdio.h>

int main()
{
    int n, temp, digits = 0;
    int first, last, middle, power = 1, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    
    while(temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    for(int i=1; i<digits; i++)
    {
        power = power * 10;
    }

    first = n / power;
    last = n % 10;
    middle = (n % power) / 10;

    result = last * power + middle * 10 + first;

    printf("%d", result);

    return 0;
}