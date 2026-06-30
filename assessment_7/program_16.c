#include<stdio.h>
void check_prime(int);
int main()
{
    int x;
    scanf("%d",&x);
    check_prime(x);
    return 0;
}
void check_prime(int x)
{
    int i=2,flag=1;
    if(x<=1)
    {
        printf("Not Prime");
        return;
    }
    while(i<x){
        if(x%i==0){
            flag=0;
            break;
        }
        i++;
    }
    if(flag==1)
        printf("Prime");
    else
    printf("Not prime");
}