#include <stdio.h>

void disp_total_odd_digits(int);

int main()
{
    int x;

    scanf("%d", &x);
    disp_total_odd_digits(x);

    return 0;
}

void disp_total_odd_digits(int x)
{
    int count=0,digit;
    while(x>0){
        digit=x%10;
        if(digit%2 !=0 )
        count++;
        x/=10;
    }
printf("%d",count);
}