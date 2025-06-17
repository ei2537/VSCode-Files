#include<stdio.h>

int main () {
    int i,N,sum=0;
    scanf("%d",&N);
    int Time[7][N];
    char C[N+1];
    for(i=0;i<N;i++) scanf(" %c",&C[i]);
    for(i=0;i<7;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&Time[i][j]);
        }
    }
    for(i=0;i<N;i++){
        printf("%c ",C[i]);
        for(int j=0;j<7;j++){
            sum+=Time[j][i];
        }
        printf("%d\n",sum/7);
        sum=0;
    }
    return 0;
}