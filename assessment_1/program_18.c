//Program 18: Get a number from the user and subtract 5 from that number if the number is odd. Do not use if.
#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d",&x);

    y = x - (x % 2) * 5;

    printf("Result = %d", y);

    return 0;
}
//