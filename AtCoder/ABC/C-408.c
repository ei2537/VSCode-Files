#include <stdio.h>

int main() {
    int i,N,M,L,R,most;
    scanf("%d%d",&N,&M);
    int Cover[N+2];
    for(i=0;i<=N+1;i++) Cover[i]=0;
    for(i=0;i<M;i++){
        scanf("%d%d",&L,&R);
        Cover[L]+=1;
        if(R+1<=N){
            Cover[R+1]-=1;
        }
    }
    for(i=1;i<=N;i++){
        Cover[i]+=Cover[i-1];
    }
    most=Cover[1];
    for(i=2;i<=N;i++){
        if(Cover[i]<most){
            most=Cover[i];
        }
    }
    printf("%d\n", most);
    return 0;
}