#include <stdio.h>

int main()
{
    int x, first2, last2;

    printf("Enter the number: ");
    scanf("%d", &x);

    first2 = x / 100;
    last2 = x % 100;

    if (first2 == last2)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }

    return 0;
}