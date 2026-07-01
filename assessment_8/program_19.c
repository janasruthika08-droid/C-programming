#include <stdio.h>

int disp_LCM3(int);

int main()
{
    int x, y;

    y = disp_LCM3(x);

    printf("%d", y);

    return 0;
}

int disp_LCM3(int x)
{
    int a, b, c, lcm;

    scanf("%d%d%d", &a, &b, &c);

    if(a > b && a > c)
        lcm = a;
    else if(b > c)
        lcm = b;
    else
        lcm = c;

    while(lcm > 0)
    {
        if(lcm % a == 0 &&
           lcm % b == 0 &&
           lcm % c == 0)
        {
            return lcm;
        }

        lcm++;
    }

    return 0;
}