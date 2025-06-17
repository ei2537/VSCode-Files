#include<stdio.h>

int main () {
    int i,i2,M,N,ans=0;
    scanf("%d %d\n",&M,&N);
    char C[N];
    for(i=0;i<N;i++){
        scanf("%c ",&C[i]);
    }
    int Data[M][N];
    for(i=0;i<M;i++){
        for(i2=0;i2<N;i2++){
            scanf("%d",&Data[i][i2]);
        }
    }
    for(i=0;i<N;i++){
        for(i2=0;i2<M;i2++){
            ans+=Data[i2][i];
        }
        printf("%c %d\n",C[i],ans/M);
        ans=0;
    }
    return 0;
}