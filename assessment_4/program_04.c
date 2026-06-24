#include<stdio.h>

int main()
{
    int x=6;
    int sum=0;
loop:
    if(x >= 1)
    {
        sum+=x;
        x--;
        goto loop;
    }
    printf("%d\n",sum);
    return 0;

}