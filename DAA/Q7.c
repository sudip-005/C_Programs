#include <stdio.h>
#include <limits.h>

struct Res {
    int min, smin, max, smax;
};

struct Res solve(int a[], int l, int r) {
    struct Res res, left, right;

    if (l == r) {
        res.min = res.max = a[l];
        res.smin = INT_MAX;
        res.smax = INT_MIN;
        return res;
    }

    int m = (l + r) / 2;
    left = solve(a, l, m);
    right = solve(a, m + 1, r);

    res.min = left.min < right.min ? left.min : right.min;
    res.max = left.max > right.max ? left.max : right.max;

    res.smin = (left.min < right.min) ?
        (left.smin < right.min ? left.smin : right.min) :
        (right.smin < left.min ? right.smin : left.min);

    res.smax = (left.max > right.max) ?
        (left.smax > right.max ? left.smax : right.max) :
        (right.smax > left.max ? right.smax : left.max);

    return res;
}

int main() {
    int a[] = {4,1,7,3,9,5}, n = 6;
    struct Res r = solve(a,0,n-1);
    printf("Second Smallest = %d\nSecond Largest = %d\n", r.smin, r.smax);
    return 0;
}
