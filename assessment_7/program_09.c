#include <stdio.h>

void disp_2digit_ones5(int);

int main()
{
    int x;
    disp_2digit_ones5(x);
    return 0;
}

void disp_2digit_ones5(int x)
{
    int i = 15, sum = 0;

    while(i <= 95)
    {
        sum = sum + i;
        i = i + 10;
    }

    printf("%d", sum);
}