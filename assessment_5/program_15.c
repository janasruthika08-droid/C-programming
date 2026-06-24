#include<stdio.h>

int main()
{
    int n, temp, digits = 0;
    int first, last, power = 1, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    if(last % 2 == 0)
    {
        result = n;
    }
    else
    {
        temp = n;

        while(temp > 0)
        {
            digits++;
            temp = temp / 10;
        }

        for(int i = 1; i < digits; i++)
        {
            power = power * 10;
        }

        first = n / power;

        result = (first - 1) * power + (n % power);
    }

    printf("%d", result);

    return 0;
}