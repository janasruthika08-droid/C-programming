#include<stdio.h>

int main()
{
    int n, num;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n >= 10)
    {
        num = n % 100;

        if(num == 16 || num == 25 || num == 36 ||
           num == 49 || num == 64 || num == 81)
        {
            count++;
        }

        n = n / 10;
    }

    printf("Total two-digit perfect square numbers = %d", count);

    return 0;
}