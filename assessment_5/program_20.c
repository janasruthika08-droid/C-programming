#include<stdio.h>

int main()
{
    int count = 0, factor;

    for(int i = 2; i <= 9; i++)
    {
        factor = 0;

        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                factor++;
            }
        }

        if(factor == 2)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}