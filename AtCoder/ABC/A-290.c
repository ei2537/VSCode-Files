#include<stdio.h>

int main () {
    int i,N,M,A[99],B,ans=0;
    scanf("%d%d",&N,&M);
    for(i=0;i<N;i++){
    scanf("%d",&A[i]);
    }
    for(i=0;i<M;i++){
    scanf("%d",&B);
    ans+=A[B-1];
    }
    printf("%d\n",ans);
    return 0;
}