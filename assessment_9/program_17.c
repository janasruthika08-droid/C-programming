#include <stdio.h>

int main() {
    int a[5];
    int i;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 4; i > 0; i--) {
        if(a[i] >= 10) {
            a[i-1] = a[i-1] + a[i] / 10;
            a[i] = a[i] % 10;
        }
    }
    printf("Array after carry adjustment:\n");
if(a[0] >= 10) {
        printf("%d ", a[0] / 10);
        a[0] = a[0] % 10;
    }

    for(i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}