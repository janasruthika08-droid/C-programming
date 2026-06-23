//Program 21:Get a three-digit number and subtract 5 from that number if the one's digit and hundred's digit are odd. Do not use if.
#include<stdio.h>

int main()
{
    int x,y;

    printf("Enter Number: ");
    scanf("%d",&x);

    y = x - (((x/100)%2) * ((x%10)%2) * 5);

    printf("Result = %d",y);

    return 0;
}
//