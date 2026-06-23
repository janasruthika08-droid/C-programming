//Program 24: Get a 4-digit number and reverse the first two digits.
#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d",&x);

    y = ((x/100)%10)*1000 + (x/1000)*100 + (x%100);

    printf("Result = %d", y);

    return 0;
}
//