#include <stdio.h>

void increment(int a[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        a[i]++;
    }
}

int main()
{
    int a[50];
    int n, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    increment(a, n);

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}