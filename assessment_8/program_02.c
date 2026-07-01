#include <stdio.h>

int disp_rsum(int);

int main()
{
    int x, y;

    y = disp_rsum(x);

    printf("%d", y);

    return 0;
}

int disp_rsum(int x)
{
    int i = 6, sum = 0;

    while(i >= 1)
    {
        sum = sum + i;
        i--;
    }

    return sum;
}