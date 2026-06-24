#include<stdio.h>

int main()
{
    int tens, ones;

    for(int i=10; i<=99; i++)
    {
        if(i % 2 == 0)   
        {
            tens = i / 10;
            ones = i % 10;

            if(tens + ones == 6)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}