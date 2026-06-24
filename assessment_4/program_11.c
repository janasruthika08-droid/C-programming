#include <stdio.h>

int main()
{
    int x, count = 0;

    printf("Enter the number: ");
    scanf("%d", &x);

loop:
    if (x > 0)
    {
        x = x / 10;
        count++;

        goto loop;
    }

    printf("%d", count);

    return 0;
}