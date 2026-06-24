#include <stdio.h>

int main()
{
    int x, h, t, o;

    printf("Enter the number: ");
    scanf("%d", &x);

    o = x % 10;         // ones digit
    t = (x / 10) % 10;  // tens digit
    h = x / 100;        // hundreds digit

    if (t == o && h != t)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }

    return 0;
}