#include <stdio.h>

void disp_count_HCF2(int);

int main()
{
    int x;
    disp_count_HCF2(x);
    return 0;
}

void disp_count_HCF2(int x)
{
    int a,b,hcf;

    scanf("%d%d",&a,&b);

    if(a<b)
        hcf=a;
    else
        hcf=b;

    while(hcf>=1)
    {
        if(a%hcf==0 && b%hcf==0)
        {
            printf("%d",hcf);
            break;
        }

        hcf--;
    }
}