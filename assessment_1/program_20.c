//Program 20:Get a two-digit number from the user and subtract 5 from that number if the sum of the digits is odd, then print the result. Do not use if.
#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d",&x);

    y = x - ((((x/10) + (x%10)) % 2) * 5);

    printf("Result = %d", y);

    return 0;
}
//