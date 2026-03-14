#include <stdio.h>

int main() {
    int n = 3;
    float value[] = {60, 100, 120};
    float weight[] = {10, 20, 30};
    float capacity = 50;

    float ratio[n];
    for (int i = 0; i < n; i++)
        ratio[i] = value[i] / weight[i];

    float totalValue = 0;

    for (int i = 0; i < n; i++) {
        if (capacity >= weight[i]) {
            capacity -= weight[i];
            totalValue += value[i];
        } else {
            totalValue += ratio[i] * capacity;
            break;
        }
    }

    printf("Maximum value = %.2f\n", totalValue);
    return 0;
}
