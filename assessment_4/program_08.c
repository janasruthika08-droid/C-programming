#include<stdio.h>

int main()
{
    int x=10;
    int tens,ones;

loop:
    if(x<=99)
    {
        tens=x/10;
        ones=x%10;
        if(x%2==0 && (tens+ones) == 6)
        {
            printf("%d\n",x);
        }

        x++;
        goto loop;
    }

    return 0;
}