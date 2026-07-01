#include <stdio.h>

int disp_biggest_4digit_div7_9(int);

int main()
{
    int x, y;

    y = disp_biggest_4digit_div7_9(x);

    printf("%d", y);

    return 0;
}

int disp_biggest_4digit_div7_9(int x)
{
    int i = 9999;

    while(i >= 1000)
    {
        if(i % 7 == 0 && i % 9 == 0)
        {
            return i;
        }

        i--;
    }

    return 0;
}