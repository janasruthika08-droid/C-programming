#include <stdio.h>

int main() {
    int arr[5];
    int i, sum = 0;
    float avg;

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = sum / 5.0;

    printf("Average = %.2f", avg);

    return 0;
}