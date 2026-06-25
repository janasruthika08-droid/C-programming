#include<stdio.h>

int main()
{
    int i = 6;
    int sum=0;

    while(i >= 1)
    {
        sum+=i;
        i--;
    }
printf("Sum is: %d",sum);
    return 0;
}