#include <stdio.h>

int main()
{
    int x, sum = 0, digit;

    printf("Enter the number: ");
    scanf("%d", &x);

loop:
    if (x > 0)
    {
        digit = x % 10;  
        sum += digit;     
        x = x / 10;       

        goto loop;
    }

    printf("%d", sum);

    return 0;
}