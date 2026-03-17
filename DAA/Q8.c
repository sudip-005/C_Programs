#include <stdio.h>

int first(int a[], int n, int x) {
    int l=0,r=n-1,ans=-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==x){ ans=m; r=m-1; }
        else if(a[m]<x) l=m+1;
        else r=m-1;
    }
    return ans;
}

int last(int a[], int n, int x) {
    int l=0,r=n-1,ans=-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==x){ ans=m; l=m+1; }
        else if(a[m]<x) l=m+1;
        else r=m-1;
    }
    return ans;
}

int main() {
    int a[]={1,2,2,2,3,4}, n=6, x=2;
    int f=first(a,n,x), l=last(a,n,x);
    printf("Occurrences = %d\n", (f==-1)?0:l-f+1);
    return 0;
}
