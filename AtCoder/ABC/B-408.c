#include<stdio.h>

int main () {
    int i,j,N,A[100]={},most,temp,M=0;
    scanf("%d",&N);
    for(i=0;i<N;i++) scanf("%d",&A[i]);
    for(i=0;i<N;i++){
        most=i;
        for(j=i;j<N;j++){
            if(A[j]<A[most]) most=j;
        }
        temp=A[i];
        A[i]=A[most];
        A[most]=temp;
    }
    for(i=0;i<N;i++) if(i==0||A[i]!=A[i-1]) M++;
    for(i=0;i<N;i++){
        if(i==0) printf("%d\n",M);
        if(i==0||A[i]!=A[i-1]) printf("%d ",A[i]);
    }
    return 0;
}