#include<stdio.h>

int main()
{
    int x=1;
    int sum=0;
loop:
    if(x < 6)
    {
        sum+=x;
        x++;
        goto loop;
    }
    printf("%d\n",sum);
    return 0;

}