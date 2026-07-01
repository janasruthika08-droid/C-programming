#include <stdio.h>

void disp_count_sum14(int);

int main()
{
    int x;
    disp_count_sum14(x);
    return 0;
}

void disp_count_sum14(int x)
{
    int i = 1, count = 0;

    while(i < 100000)
    {
        int temp = i;
        int sum = 0;

        while(temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }

        if(sum == 14)
            count++;

        i++;
    }

    printf("%d", count);
}