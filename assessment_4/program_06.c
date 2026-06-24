#include<stdio.h>

int main()
{
    int x=11;
    int num;
loop:
    if(x <= 20)
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