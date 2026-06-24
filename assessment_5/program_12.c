#include<stdio.h>

int main()
{
    int n, count = 0;
    int sum=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        sum=sum+(n%10);
        n/=10;
    }

    printf("sum = %d", sum);

    return 0;
}