#include <stdio.h>

void find_2digit_odd_sum7(int a[], int *n)
{
    int i, sum;

    *n = 0;

    for(i = 10; i <= 99; i++)
    {
        sum = (i / 10) + (i % 10);

        if(i % 2 != 0 && sum == 7)
        {
            a[*n] = i;
            (*n)++;
        }
    }
}

int main()
{
    int a[50];
    int n, i;

    find_2digit_odd_sum7(a, &n);

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}