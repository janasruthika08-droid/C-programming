//Check first two digit and last two digit are same
#include<stdio.h>
int main()
{
    int x,last,first;
    printf("Enter the number: ");
    scanf("%d",&x);
    last=x%100;
    first=x/100;
    if(first==last){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}
//