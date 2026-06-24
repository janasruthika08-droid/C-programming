//Check identical numbers
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the number: ");
    scanf("%d",&x);
    y=x%10;
    z=x/10;
    if(y==z){
        printf("Success");
    }else{
        printf("Failure");
    }
    return 0;
}
//