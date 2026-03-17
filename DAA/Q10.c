#include <stdio.h>

int main() {
    int a[] = {3,5,2,3,0,9,1,5};
    int n = 8;
    int count[10] = {0};

    for(int i=0;i<n;i++)
        count[a[i]]++;

    printf("Sorted array:\n");
    for(int i=0;i<10;i++)
        while(count[i]--)
            printf("%d ", i);

    return 0;
}
