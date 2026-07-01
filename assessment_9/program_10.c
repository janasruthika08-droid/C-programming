#include <stdio.h>

int main() {
    int a[5], b[5];
    int i, j = 0, k, prime;

    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++) {
        prime = 1;

        if(a[i] <= 1) {
            prime = 0;
        }
        else {
            for(k = 2; k < a[i]; k++) {
                if(a[i] % k == 0) {
                    prime = 0;
                    break;
                }
            }
        }

        if(prime == 0) {
            b[j] = a[i];
            j++;
        }
    }
    printf("New Array:\n");
    for(i = 0; i < j; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}