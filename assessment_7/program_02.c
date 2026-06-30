#include<stdio.h>
void disp_descend(int);
int main(){
    int x;
    disp_descend(x);
    return 0;
}
void disp_descend(int x)
{
    int i=5;
    while(i>=1){
        printf("%d\n", i);
        i--;
    }
}