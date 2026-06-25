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

        if(num % 2 != 0)
        {
            count++;
        }

        n = n / 10;      
    }

    printf("Total two-digit odd numbers = %d", count);

    return 0;
}