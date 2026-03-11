#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int X = 6;

    int left = 0, right = n - 1;

    printf("Pairs with sum %d are:\n", X);

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == X) {
            printf("(%d, %d)\n", arr[left], arr[right]);
            left++;
            right--;
        } else if (sum < X) {
            left++;
        } else {
            right--;
        }
    }
    return 0;
}
