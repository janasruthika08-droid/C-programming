#include <stdio.h>

int disp_LCM2(int);

int main()
{
    int x, y;

    y = disp_LCM2(x);

    printf("%d", y);

    return 0;
}

int disp_LCM2(int x)
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
            return lcm;

        lcm++;
    }
}