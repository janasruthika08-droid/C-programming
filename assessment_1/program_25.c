//Program 25:Get a 2-digit number and print the sum of its digits.
#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d",&x);

    y = (x / 10) + (x % 10);

    printf("Result = %d", y);

    return 0;
}
//