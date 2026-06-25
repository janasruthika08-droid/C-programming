#include<stdio.h>

int main()
{
    int n, ones, tens, num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n >= 10)
    {
        ones = n % 10;
        tens = (n / 10) % 10;
        num = tens * 10 + ones;

        if(num == 16 || num == 25 || num == 36 ||
           num == 49 || num == 64 || num == 81)
        {
            count++;
        }

        n = n / 10;
    }

    printf("Total = %d", count);

    return 0;
}