#include <stdio.h>

void disp_LCM2(int);

int main()
{
    int x;
    disp_LCM2(x);
    return 0;
}

void disp_LCM2(int x)
{
    int a, b, lcm;

    scanf("%d%d", &a, &b);

    if(a > b)
        lcm = a;
    else
        lcm = b;

    while(1)
    {
        if(lcm % a == 0 && lcm % b == 0)
        {
            printf("%d", lcm);
            break;
        }

        lcm++;
    }
}