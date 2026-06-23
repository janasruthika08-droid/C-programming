// Program 9:Extract the hundreds digit of a three-digit number

#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d", &x);

    y = x / 100;

    printf("Result = %d", y);

   return 0;
}
//