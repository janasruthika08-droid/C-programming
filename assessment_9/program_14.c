#include <stdio.h>

int main() {
    int a[100];
    int i = 0;

    printf("Enter numbers (0 to stop):\n");

    while(1) {
        scanf("%d", &a[i]);

        if(a[i] == 0)
            break;

        i++;
    }

    if(i % 2 != 0) {
        printf("Middle Number = %d", a[i/2]);
    }
    else {
        float avg;
        avg = (a[(i/2)-1] + a[i/2]) / 2.0;
        printf("Average of Middle Two Numbers = %.2f", avg);
    }

    return 0;
}