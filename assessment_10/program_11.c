#include <stdio.h>

int main()
{
    char a[51];
    int b[50];
    int i;

    scanf("%s", a);

    for(i = 0; a[i] != '\0'; i++)
    {
        b[i] = a[i] - '0';
    }

    for(i = 0; a[i] != '\0'; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}