#include <stdio.h>

int main()
{
    char a[51];
    int i = 0;

    scanf("%s", a);

    while(a[i] == '0')
    {
        i++;
    }

    printf("%s", &a[i]);

    return 0;
}