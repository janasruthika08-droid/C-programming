#include <stdio.h>

void disp_2digit_even_sum6(int);

int main()
{
    int x;
    disp_2digit_even_sum6(x);
    return 0;
}

void disp_2digit_even_sum6(int x)
{
    int i = 11, sum, a, b;

    while(i <= 99)
    {
        a = i / 10;    
        b = i % 10;      
        sum = a + b;

        if(i % 2 == 0 && sum == 6)
        {
            printf("%d ", i);
        }

        i++;
    }
}