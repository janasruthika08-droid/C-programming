#include<stdio.h>

int main()
{
    int a, b, c, lcm;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    // Find the largest number
    if(a >= b && a >= c)
        lcm = a;
    else if(b >= a && b >= c)
        lcm = b;
    else
        lcm = c;

    while(1)
    {
        if(lcm % a == 0 && lcm % b == 0 && lcm % c == 0)
        {
            printf("LCM = %d", lcm);
            break;
        }

        lcm++;
    }

    return 0;
}