#include<stdio.h>

int main()
{
    int n, temp, sum, count = 0;

    for(n = 1; n < 100000; n++)
    {
        temp = n;
        sum = 0;

        while(temp > 0)
        {
            sum = sum + (temp % 10);
            temp = temp / 10;
        }

        if(sum == 14)
        {
            count++;
        }
    }

    printf("Count = %d", count);

    return 0;
}