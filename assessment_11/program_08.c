#include <stdio.h>

int strcmp1(char src[], char dst[])
{
    int i;

    for(i = 0; src[i] != '\0' || dst[i] != '\0'; i++)
    {
        if(src[i] != dst[i])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char src[100], dst[100];

    scanf("%s", src);
    scanf("%s", dst);

    if(strcmp1(src, dst))
        printf("Success");
    else
        printf("Failure");

    return 0;
}