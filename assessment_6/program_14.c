#include<stdio.h>

int main()
{
    int n, temp, first, last, middle, count = 0, power = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    temp = n;
    while(temp >= 10)
    {
        temp = temp / 10;
        count++;
    }
    first = temp;

    count++;

    for(int i = 1; i <= count - 2; i++)
    {
        power = power * 10;
    }

    middle = (n / 10) % power;

    int result = last;

    for(int i = 1; i <= count - 1; i++)
    {
        result = result * 10;
    }

    result = result + (middle * 10) + first;

    printf("Result = %d", result);

    return 0;
}