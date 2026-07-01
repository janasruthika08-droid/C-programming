#include <stdio.h>

int disp_2digit_even_sum6(int);

int main()
{
    int x, y;

    y = disp_2digit_even_sum6(x);

    printf("%d", y);

    return 0;
}

int disp_2digit_even_sum6(int x)
{
    int count = 0;
    int i = 2;

    while(i <= 9)
    {
        if(i == 2 || i == 3 || i == 5 || i == 7)
            count++;
            i++;
    }

    return count;
}