//Program 15:Get a two-digit number from the user, make the one's digit 0, then print it.
#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d",&x);

    y = (x / 10) * 10;

    printf("Result = %d", y);

    return 0;
}
//