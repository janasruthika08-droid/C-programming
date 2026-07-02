#include <stdio.h>

void strcopy(char src[], char dst[])
{
    int i;

    for(i = 0; src[i] != '\0'; i++)
    {
        dst[i] = src[i];
    }

    dst[i] = '\0';
}

int main()
{
    char src[100], dst[100];

    scanf("%s", src);

    strcopy(src, dst);

    printf("%s", dst);

    return 0;
}