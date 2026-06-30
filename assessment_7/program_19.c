#include <stdio.h>

void middle_2digits_prime(int);

int main()
{
    int x;

    scanf("%d", &x);
    middle_2digits_prime(x);

    return 0;
}

void middle_2digits_prime(int x)
{
    int num, i = 2, flag = 1;

    num = (x / 10) % 100; 

    if(num <= 1)
        flag = 0;

    while(i < num)
    {
        if(num % i == 0)
        {
            flag = 0;
            break;
        }
        i++;
    }

    if(flag == 1)
        printf("Prime");
    else
        printf("Not Prime");
}