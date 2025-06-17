#include<stdio.h>

int main () {
    int i,j,N,ans=0,count;
    long long A[100]={};
    scanf("%d",&N);
    for(i=0;i<N;i++) scanf("%lld",&A[i]);
    for(i=0;i<=N;i++){
        count=0;
        for(j=0;j<N;j++){
            if(A[j]>=i) count++;
        }
        if(count>=i&&i>ans){
            ans=i;
        }
    }
    printf("%d\n",ans);
    return 0;
}