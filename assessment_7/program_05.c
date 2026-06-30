#include <stdio.h>

void disp_odd(int);

int main()
{
    int x;
    disp_odd(x);
    return 0;
}
void disp_odd(int x)
{
    int i = 1;

    while(i <= 9)
    {
        if(i % 2 != 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
}