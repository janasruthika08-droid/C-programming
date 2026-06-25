#include<stdio.h>

int main()
{
    int n, count = 0;
    int ones,tens;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }
ones=n%10;
tens=n/10;
    if((count == 2) && (tens+ones==14))
    {
        printf("Prime and the sum of digits is 14.");
    }
    else if((count == 2) && (tens+ones!=14)){
        printf("Prime and the sum of digits is not equal to 14.");
    }
    else if((count != 2) && (tens+ones==14)){
        printf("Not Prime and the sum of digits is equal to 14.");
    }

    else
    {
        printf("Not Prime and sum of digits is not equal to 14.");
    }

    return 0;
}