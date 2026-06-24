//Check first digit less than or equal to zero digit
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the number: ");
    scanf("%d",&x);
    y=x%10;
    z=x/10;
    if(z<=y){
        printf("Success");
    }else{
        printf("Failure");
    }
    return 0;
}
//