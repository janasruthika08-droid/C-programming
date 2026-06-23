// Program 7:Extract the first digit of a two-digit number

#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d", &x);

    y = x / 10;

    printf("Result = %d", y);

    return 0;
}
//