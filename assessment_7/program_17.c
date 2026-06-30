#include <stdio.h>

void check_prime_and_sum14(int);

int main()
{
    int x;

    scanf("%d", &x);
    check_prime_and_sum14(x);

    return 0;
}

void check_prime_and_sum14(int x)
{
    int i = 2, flag = 1;
    int temp = x, sum = 0;

    if(x <= 1)
        flag = 0;

    while(i < x && flag == 1)
    {
        if(x % i == 0)
        {
            flag = 0;
            break;
        }
        i++;
    }

    while(temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    if(flag == 1 && sum == 14)
        printf("Prime & sum of digits is 14");
    else if(flag == 0 && sum == 14)
        printf("Not Prime but sum of digits is 14");
    else if(flag == 1 && sum != 14)
        printf("Prime & sum of digits is not 14");
    else
        printf("Not Prime & sum of digits is not 14");
}