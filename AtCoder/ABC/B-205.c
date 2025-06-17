#include <stdio.h>

int main() {
    int N,i,Yn=1;
    scanf("%d",&N);
    int A[N],C[N+1];
    for(i=0;i<=N;i++){
        C[i]=0;
    }
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
        if(A[i]<1||A[i]>N){
            Yn=0;
        }else{
            C[A[i]]++;
        }
    }
    for(i=1;i<=N;i++){
        if(C[i]!=1){
            Yn=0;
        }
    }
    if(Yn==1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}
