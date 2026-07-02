#include <stdio.h>

int main()
{
    int a[50];
    char b[51];
    int n, i;

    printf("Number of digits are: ");
    scanf("%d", &n);
    printf("Integer array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i] + '0';
    }

    b[n] = '\0';

    printf("Character array: %s", b);

    return 0;
}