#include<stdio.h>

int main()
{
    int n, count = 0;
    int lasttwo;

    printf("Enter a number: ");
    scanf("%d", &n);
    lasttwo=n%100;
    for(int i=1; i<=lasttwo; i++)
    {
        if(lasttwo % i == 0)
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