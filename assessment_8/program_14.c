#include <stdio.h>

int disp_two_digit_square(int);

int main()
{
    int x, y;

    scanf("%d", &x);

    y = disp_two_digit_square(x);

    printf("%d", y);

    return 0;
}

int disp_two_digit_square(int x)
{
    int num, count = 0;

    while(x >= 10)
    {
        num = x % 100;

        if(num == 16 || num == 25 || num == 36 ||
           num == 49 || num == 64 || num == 81)
        {
            count++;
        }

        x = x / 10;
    }

    return count;
}