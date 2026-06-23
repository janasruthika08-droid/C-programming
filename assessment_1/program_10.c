// Program 10: Extract tens digit of a three-digit number

#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d", &x);

    y = (x / 10) % 10;

    printf("Result = %d", y);

    return 0;
}
//