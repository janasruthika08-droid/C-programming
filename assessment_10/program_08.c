#include <stdio.h>

int main()
{
    char a[51];
    int i, flag = 1;

    scanf("%s", a);

    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] < '0' || a[i] > '9')
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Valid");
    else
        printf("Invalid");

    return 0;
}