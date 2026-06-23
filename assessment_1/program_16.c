//Program 16:Get a two-digit number from the user, make the ten's digit 1,then print it.
#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d",&x);

    y = 10 + (x % 10);

    printf("Result = %d", y);

    return 0;
}
//