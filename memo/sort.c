#include<stdio.h>

int main () {
    int i,j,n,most,temp;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++) scanf("%d",&A[i]);
    for(i=0;i<n;i++){
        most=i;
        for(j=i;j<n;j++){
            if(A[j]<A[most]) most=j;
        }
        temp=A[i];
        A[i]=A[most];
        A[most]=temp;
    }
    for(i=0;i<n;i++) printf("%d\n",A[i]);
    return 0;
}