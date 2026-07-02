#include <stdio.h>

int main()
{
    int n;
    char str[100];
    scanf("%d",&n);
    sprintf(str,"%d",n);
    printf("%s",str);
    return 0;
}