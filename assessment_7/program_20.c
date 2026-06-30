#include <stdio.h>

void disp_2digit_even_sum6(int);

int main()
{
    int x;
    disp_2digit_even_sum6(x);
    return 0;
}

void disp_2digit_even_sum6(int x)
{
    int count=0;
    int i=2;
while(i<=9)
{
    int j=2,flag=1;
    while(j<i)
    {
        if(i%j==0){
            flag=0;
            break;
        }
        j++;
    }
    if(flag==1)
    count++;
    i++;
}
    printf("%d",count);
}