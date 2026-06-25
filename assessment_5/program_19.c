#include<stdio.h>

int main()
{
    int n, middle, count = 0;

    printf("Enter a 4-digit number: ");
    scanf("%d", &n);

    middle = (n / 10) % 100;

    for(int i = 1; i <= middle; i++)
    {
        if(middle % i == 0)
        {
            count++;
        }
    }

    if(count == 2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }

    return 0;
}