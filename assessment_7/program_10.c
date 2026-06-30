#include <stdio.h>

void disp_2digit_odd_sum_tens7(int);

int main()
{
    int x;
    disp_2digit_odd_sum_tens7(x);
    return 0;
}

void disp_2digit_odd_sum_tens7(int x)
{
    int i = 71, sum = 0;

    while(i <= 79)
    {
        sum = sum + i;
        i = i + 2;
    }

    printf("%d", sum);
}