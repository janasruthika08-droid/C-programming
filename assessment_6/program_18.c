#include<stdio.h>

int main()
{
    int n, temp, count = 0, digits = 0;
    int firstTwo;
    int power = 1;
    int i = 1;

    printf("Enter number: ");
    scanf("%d",&n);

    temp = n;

    while(temp > 0)
    {
        digits++;
        temp /= 10;
    }

    for(i = 1; i <= digits - 2; i++)
    {
        power = power * 10;
    }

    firstTwo = n / power;

    i = 1;
    count = 0;

    while(i <= firstTwo)
    {
        if(firstTwo % i == 0)
            count++;

        i++;
    }

    if(count == 2)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}