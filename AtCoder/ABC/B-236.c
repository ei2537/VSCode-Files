#include <stdio.h>

int main() {
    int a,i,N,M,C[100001]={0};
    scanf("%d",&N);
    for (i=0;i<4*N-1;i++){
        scanf("%d",&a);
        C[a]++;
    }
    for (i=1;i<=N;i++){
        if (C[i]==3){
            M=i;
        }
    }
    printf("%d\n",M);
    return 0;
}