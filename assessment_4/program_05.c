#include<stdio.h>

int main()
{
    int x=1;
    int num;
loop:
    if(x <= 9)
    {
        num=x%2;
        {
            if(num!=0){
                printf("%d ",x);
            }
        }
        x++;
        goto loop;
    }
    return 0;

}