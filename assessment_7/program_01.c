#include<stdio.h>
void disp_assend(int);
int main(){
    int x;
    disp_assend(x);
    return 0;
}
void disp_assend(int x)
{
    int i=1;
    while(i<=5){
        printf("%d\n", i);
        i++;
    }
}