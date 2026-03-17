#include <stdio.h>

double median(int A[], int B[], int n) {
    int l=0,r=n;
    while(l<=r){
        int i=(l+r)/2;
        int j=n-i;

        int A1=i==0?-1e9:A[i-1];
        int A2=i==n?1e9:A[i];
        int B1=j==0?-1e9:B[j-1];
        int B2=j==n?1e9:B[j];

        if(A1<=B2 && B1<=A2)
            return ( (A1>B1?A1:B1) + (A2<B2?A2:B2) )/2.0;
        else if(A1>B2) r=i-1;
        else l=i+1;
    }
    return 0;
}

int main() {
    int A[]={1,3,5}, B[]={2,4,6};
    printf("Median = %.1f\n", median(A,B,3));
    return 0;
}
