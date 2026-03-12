#include <stdio.h>

int main() {
    int A[3][4] = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int key = 16;
    int N = 3, M = 4;
    int low = 0, high = N * M - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        int row = mid / M;
        int col = mid % M;

        if (A[row][col] == key) {
            printf("Element found at position (%d, %d)\n", row, col);
            return 0;
        } else if (A[row][col] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("Element not found\n");
    return 0;
}