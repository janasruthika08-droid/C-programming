#include <stdio.h>

int main() {
    int a[100];
    int i = 0, sum = 0;

    printf("Enter numbers (0 to stop):\n");

    while(1) {
        scanf("%d", &a[i]);

        if(a[i] == 0)
            break;

        sum = sum + a[i];
        i++;
    }

    printf("Total numbers entered = %d\n", i);
    printf("Sum = %d", sum);

    return 0;
}