#include <stdio.h>

void disp_LCM3(int);

int main()
{
    int x;
    disp_LCM3(x);
    return 0;
}

void disp_LCM3(int x)
{
    int a, b, c, lcm;

    scanf("%d%d%d", &a, &b, &c);

    if(a > b && a > c)
        lcm = a;
    else if(b > c)
        lcm = b;
    else
        lcm = c;

    while(1)
    {
        if(lcm % a == 0 && lcm % b == 0 && lcm % c == 0)
        {
            printf("%d", lcm);
            break;
        }

        lcm++;
    }
}