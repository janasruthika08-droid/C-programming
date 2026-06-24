#include<stdio.h>

int main()
{
    int x=10;
    int tens,ones;
    int sum=0;

loop:
    if(x<=99)
    {
        tens=x/10;
        ones=x%10;
        if(x%2!=0 && tens == 7)
        {
            sum+=x;
        }

        x++;
        goto loop;
    }
printf("%d\n",sum);
    return 0;
}