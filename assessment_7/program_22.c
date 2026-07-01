#include <stdio.h>

void disp_total_2digit_odd(int);

int main()
{
    int x;

    scanf("%d", &x);
    disp_total_2digit_odd(x);

    return 0;
}

void disp_total_2digit_odd(int x)
{
    int count = 0, num;

    while(x >= 10)
    {
        num = x % 100; 

        if(num % 2 != 0)
            count++;

        x = x / 10;    
    }

    printf("%d", count);
}