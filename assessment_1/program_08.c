// Program 8: Get a three-digit number from the user and print the 1's digit (unit digit)

#include<stdio.h>

int main()
{
    int x,y;

    printf("Enter Number : ");
    scanf("%d",&x);

    y = x % 10;

    printf("Result = %d",y);

    return 0;
}
//