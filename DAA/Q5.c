#include <stdio.h>

int merge(int a[], int t[], int l, int m, int r) {
    int i=l, j=m+1, k=l, inv=0;
    while(i<=m && j<=r) {
        if(a[i]<=a[j]) t[k++]=a[i++];
        else { t[k++]=a[j++]; inv+=m-i+1; }
    }
    while(i<=m) t[k++]=a[i++];
    while(j<=r) t[k++]=a[j++];
    for(i=l;i<=r;i++) a[i]=t[i];
    return inv;
}

int ms(int a[], int t[], int l, int r) {
    int inv=0, m;
    if(l<r) {
        m=(l+r)/2;
        inv+=ms(a,t,l,m);
        inv+=ms(a,t,m+1,r);
        inv+=merge(a,t,l,m,r);
    }
    return inv;
}

int main() {
    int a[]={2,4,1,3,5}, t[5];
    printf("Number of inversions = %d\n", ms(a,t,0,4));
    return 0;
}
