#include <stdio.h>

int main()
{
    int i = 0;
    int n, digit;
    int sum;
    int count = 0;

    while(i < 100000)
    {
        n = i;
        sum = 0;

        while(n > 0)
        {
            digit = n % 10;
            sum = sum + digit;
            n = n / 10;
        }

        if(sum == 14)
        {
            count++;
        }

        i++;
    }

    printf("Count = %d", count);

    return 0;
}