//Check non-identical numbers
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the number: ");
    scanf("%d",&x);
    y=x%10;
    z=x/10;
    if(y!=z){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}
//