#include<stdio.h>

int main () {
    int A,i,N,ans=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&A);
        if(A>0){
            ans+=A;
        }
    }
    printf("%d\n",ans);
    return 0;
}