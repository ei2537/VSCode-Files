#include<stdio.h>

int main () {
    int i,i2,N,M,ans=0;
    scanf("%d%d",&N,&M);
    int t[N],k[M],A[M];
    for(i=0;i<N;i++){
        scanf("%d",&t[i]);
    }
    for(i=0;i<M;i++){
        scanf("%d",k[i]);
        for(i2=0;i2<k[i];i2++){
            scanf("%d",A[i2]);
        }
    }
    
    return 0;
}