#include <stdio.h>

int main() {
    int a[100], b[100];
    int i = 0, j, n, sum, temp, count = 0;

    printf("Enter numbers (0 to stop):\n");

    while(1) {
        scanf("%d", &a[i]);

        if(a[i] == 0)
            break;
        i++;
    }

    count = i;

    for(i = 0; i < count; i++) {
        n = a[i];
        sum = 0;

        while(n > 0) {
            sum = sum + (n % 10);
            n = n / 10;
        }

        b[i] = sum;
    }

    for(i = 0; i < count - 1; i++) {
        for(j = i + 1; j < count; j++) {
            if(b[i] > b[j]) {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    printf("New Array in Ascending Order:\n");

    for(i = 0; i < count; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}