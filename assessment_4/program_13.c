#include <stdio.h>

int main()
{
    int x, reverse = 0;
    int digit;

    printf("Enter the number: ");
    scanf("%d", &x);

loop:
    if (x > 0)
    {
        digit=x%10;
        reverse=(reverse*10)+digit;
        x/=10;

        goto loop;
    }

    printf("%d", reverse);

    return 0;
}