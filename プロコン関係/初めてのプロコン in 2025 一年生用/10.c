#include<stdio.h>

int main () {
    int i,N,A,B;
    scanf("%d",&N);
    int ANS[N];
    for(i=0;i<N;i++){
        scanf("%d%d",&A,&B);
        if(A>=B){
            ANS[i]=A-B;
        }else if(A<=B){
            ANS[i]=B-A;
        }
    }
    for(i=0;i<N;i++){
        printf("%d\n",ANS[i]);
    }
    return 0;
}