#include <stdio.h>

int disp_total_2digit_odd(int);

int main()
{
    int x, y;

    scanf("%d", &x);

    y = disp_total_2digit_odd(x);

    printf("%d", y);

    return 0;
}

int disp_total_2digit_odd(int x)
{
    int num, count = 0;

    while(x >= 10)
    {
        num = x % 100;

        if(num % 2 != 0)
            count++;

        x = x / 10;
    }

    return count;
}