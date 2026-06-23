//Program 23: Get a three-digit number and make the ten's digit 0, then print it.
#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d",&x);

    y = (x / 100) * 100 + (x % 10);

    printf("Result = %d", y);

    return 0;
}
//