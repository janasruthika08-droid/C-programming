//Program 17:Get a 3-digit number and make the one's digit 2, then print it.
#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d",&x);

    y = (x / 10) * 10 + 2;

    printf("Result = %d", y);

    return 0;
}
//