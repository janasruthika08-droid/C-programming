#include<stdio.h>

int main()
{
    int x=11;
    int num,sum=0;
loop:
    if(x <= 99)
    {
        num=x%2;
        {
            if(num!=0){
                sum+=x;
                printf("%d ",sum);
            }
        }
        x++;
        goto loop;
    }
    return 0;

}