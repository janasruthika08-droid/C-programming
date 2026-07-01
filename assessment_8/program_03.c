#include <stdio.h>

int disp_2digit_ones5(int);

int main()
{
    int x, y;

    y = disp_2digit_ones5(x);

    printf("%d", y);

    return 0;
}

int disp_2digit_ones5(int x)
{
    int i = 15, sum = 0;

    while(i <= 95)
    {
        sum = sum + i;
        i = i + 10;
    }

    return sum;
}