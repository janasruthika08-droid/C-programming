#include<stdio.h>

int main()
{
    int i = 10;
    int tens, sum = 0;

    while(i <= 99)
    {
        tens = i / 10;

        if(tens == 7 && i % 2 != 0)
        {
            sum = sum + i;
        }

        i++;
    }

    printf("Sum = %d", sum);

    return 0;
}