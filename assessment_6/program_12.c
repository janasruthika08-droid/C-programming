#include<stdio.h>

int main()
{
    int n, count = 0;
    int digit,sum=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        count++;
        digit=n%10;
        sum=sum+digit;
        n = n / 10;
    }

    printf("sum = %d", sum);

    return 0;
}