#include<stdio.h>

int main () {
    int i,j,N,ans=0;
    scanf("%d",&N);
    int S[N+1];
    for(i=2;i<=N;i++){
        S[i]=1;
    }
    for(i=2;i*i<=N;i++){
        if(S[i]==1){
            for(j=i*i;j<=N;j+=i){
                S[j]=0;
            }
        }
    }
    for(i=2;i<=N;i++){
        if(S[i]==0) ans++;
    }
    printf("%d\n",ans+1);
    return 0;
}