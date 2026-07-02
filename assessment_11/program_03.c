#include <stdio.h>

void arrange_ascend(int a[])
{
    int i;

    for(i = 0; i < 5; i++)
    {
        a[i] = i + 1;
    }
}

int main()
{
    int a[5];
    int i;

    arrange_ascend(a);

    for(i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}