#include <stdio.h>

int disp_count_HCF2(int);

int main()
{
    int x, y;

    y = disp_count_HCF2(x);

    printf("%d", y);

    return 0;
}

int disp_count_HCF2(int x)
{
    int a, b, hcf;

    scanf("%d%d", &a, &b);

    if(a < b)
        hcf = a;
    else
        hcf = b;

    while(hcf >= 1)
    {
        if(a % hcf == 0 && b % hcf == 0)
            return hcf;

        hcf--;
    }

    return 1;
}