#include <stdio.h>

void disp_biggest_4digit_div7_9(int);

int main()
{
    int x;
    disp_biggest_4digit_div7_9(x);
    return 0;
}

void disp_biggest_4digit_div7_9(int x)
{
    int i = 9999;

    while(i >= 1000)
    {
        if(i % 7 == 0 && i % 9 == 0)
        {
            printf("%d", i);
            break;
        }

        i--;
    }
}