#include <stdio.h>

int main () {
    int i,A,B,M,K,sum;
    scanf("%d%d",&M,&K);
    int H[M],Ans[K];
    for(i=0;i<M;i++){
        scanf("%d",&H[i]);
        if(i!=0){
            H[i]+=H[i-1];
        }
    }
    for(i=0;i<K;i++){
        scanf("%d%d",&A,&B);
        if(A==1) sum=H[B-1];
        else sum=H[B-1]-H[A-2];
        Ans[i]=sum/(B-A+1);
        printf("%d\n",Ans[i]);
    }
    return 0;
}