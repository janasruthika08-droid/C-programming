#include<stdio.h>

int main()
{
    int n, i = 1;
    int count = 0;
    int sum = 0, digit, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(i <= n)
    {
        if(n % i == 0)
        {
            count++;
        }
        i++;
    }

    temp = n;

    while(temp > 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }

    if(count == 2 && sum == 14)
    {
        printf("Prime & sum of digits is 14");
    }
    else if(count != 2 && sum == 14)
    {
        printf("Not Prime but sum of digits is 14");
    }
    else if(count == 2 && sum != 14)
    {
        printf("Prime & sum of digits is not 14");
    }
    else
    {
        printf("Not Prime & sum of digits is not 14");
    }

    return 0;
}