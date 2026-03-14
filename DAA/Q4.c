#include <stdio.h>

int main() {
    int arr[] = {1, 3, 8, 12, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0], index = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }

    printf("Bitonic point is %d at index %d\n", max, index);
    return 0;
}
