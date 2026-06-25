#include<stdio.h>

int main()
{
    int n, middle;
    int count = 0;
    int i = 1;

    printf("Enter a 4-digit number: ");
    scanf("%d",&n);

    middle = (n / 10) % 100;

    while(i <= middle)
    {
        if(middle % i == 0)
            count++;

        i++;
    }

    if(count == 2)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}