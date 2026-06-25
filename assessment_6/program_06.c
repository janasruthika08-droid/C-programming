#include<stdio.h>

int main()
{
    int i = 11;
    int ones,tens;

    while(i <= 99)
    {
        ones=i%10;
        tens=i/10;
        if((i % 2 != 0) && (ones+tens==7))
        {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}