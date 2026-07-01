#include <stdio.h>

int disp_count_sum14(int);

int main()
{
    int x, y;

    y = disp_count_sum14(x);

    printf("%d", y);

    return 0;
}

int disp_count_sum14(int x)
{
    int i = 1, count = 0;

    while(i < 100000)
    {
        int temp = i;
        int sum = 0;

        while(temp > 0)
        {
            sum = sum + (temp % 10);
            temp = temp / 10;
        }

        if(sum == 14)
            count++;

        i++;
    }

    return count;
}