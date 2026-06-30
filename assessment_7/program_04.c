#include <stdio.h>

void disp_rsum(int);
int main()
{
    int x;
    disp_rsum(x);
    return 0;
}
void disp_rsum(int x)
{
    int i = 6, sum = 0;
    while(i >= 1)
    {
        sum += i;
        i--;
    }

    printf("%d", sum);
}