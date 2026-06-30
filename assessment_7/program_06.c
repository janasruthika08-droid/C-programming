#include <stdio.h>

void disp_2digit_odd_below20(int);

int main()
{
    int x;
    disp_2digit_odd_below20(x);
    return 0;
}

void disp_2digit_odd_below20(int x)
{
    int i = 11;

    while(i < 20)
    {
        printf("%d\n", i);
        i = i + 2;
    }
}