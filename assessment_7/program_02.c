#include<stdio.h>
void disp_assend(int);
int main(){
    int x;
    disp_assend(x);
    return 0;
}
void disp_assend(int x)
{
    int i=5;
    while(i>=1){
        printf("%d\n", i);
        i--;
    }
}