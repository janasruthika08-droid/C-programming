#include<stdio.h>

int main()
{
    int a, b, hcf;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    if(a < b)
        hcf = a;
    else
        hcf = b;

    while(hcf >= 1)
    {
        if(a % hcf == 0 && b % hcf == 0)
        {
            printf("HCF = %d", hcf);
            break;
        }

        hcf--;
    }

    return 0;
}