#include <stdio.h>

int main()
{
    int a;
    int *p;

    scanf("%d", &a);

    printf("%d\n", a);

    p = &a;    

    *p = 20;  

    printf("%d", a);

    return 0;
}