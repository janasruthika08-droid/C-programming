// Program 14:Get a 4-digit number and reverse only the last two digits.
#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter Number : ");
    scanf("%d",&x);

    y = (x / 100) * 100 + (x % 10) * 10 + ((x / 10) % 10);

    printf("Result = %d", y);

    return 0;
}
//