// Program 13: Get a Three-digit number from the user and print its reverse
#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter Number : ");
    scanf("%d",&x);

    y = (x % 10) * 100 + ((x / 10) % 10) * 10 + (x / 100);

    printf("Result = %d", y);

    return 0;
}
//