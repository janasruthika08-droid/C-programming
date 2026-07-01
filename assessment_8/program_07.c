#include <stdio.h>

int disp_reverse_number(int);

int main()
{
    int x, y;

    scanf("%d", &x);

    y = disp_reverse_number(x);

    printf("%d", y);

    return 0;
}

int disp_reverse_number(int x)
{
    int rev = 0;

    while(x > 0)
    {
        rev = rev * 10 + (x % 10);
        x = x / 10;
    }

    return rev;
}