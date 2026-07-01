#include <stdio.h>

void disp_two_digit_square(int);

int main()
{
    int x;

    scanf("%d", &x);
    disp_two_digit_square(x);

    return 0;
}

void disp_two_digit_square(int x)
{
    int count = 0, num;

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

    printf("%d", count);
}