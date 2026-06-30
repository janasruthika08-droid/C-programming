#include <stdio.h>

void disp_sum(int);
int main()
{
    int x;
    disp_sum(x);
    return 0;
}
void disp_sum(int x)
{
    int i = 1, sum = 0;
    while(i <= 5)
    {
        sum += i;
        i++;
    }

    printf("%d", sum);
}