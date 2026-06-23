//Program 22:Keep adding digits until a single digit remains
#include<stdio.h>

int main()
{
    int x, y;

    scanf("%d",&x);

    y = x/100 + (x/10)%10 + x%10;

    while(y >= 10)
    {
        y = y/10 + y%10;
    }

    printf("%d", y);

    return 0;
}
//