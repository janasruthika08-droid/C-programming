// Program 11:Sum of Digits of a 3-Digit Number

#include <stdio.h>

int main()
{
    int x, a, b, c, sum;

    printf("Enter Number: ");
    scanf("%d", &x);

    a = x / 100;
    b = (x / 10) % 10;
    c = x % 10;

    sum = a + b + c;

    printf("Result = %d", sum);

    return 0;
}
//