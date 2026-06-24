#include <stdio.h>

int main()
{
    int x, i = 2, flag = 0;

    printf("Enter the number: ");
    scanf("%d", &x);

    if (x <= 1)
    {
        printf("Not Prime");
        return 0;
    }

loop:
    if (i < x)
    {
        if (x % i == 0)
        {
            flag = 1;
        }

        i++;
        goto loop;
    }

    if (flag == 0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }

    return 0;
}