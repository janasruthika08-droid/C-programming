#include <stdio.h>

int main()
{
    char a[51];
    int i, len = 0;

    scanf("%s", a);

    while(a[len] != '\0')
    {
        len++;
    }

    for(i = len - 1; i >= 0; i--)
    {
        printf("%c", a[i]);
    }

    return 0;
}