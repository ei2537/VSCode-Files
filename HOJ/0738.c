#include<stdio.h>
long long Data[1000000]={};
long long ANS[1000000]={};
int main () {
    int i,j,N,M,T;
    scanf("%d",&N);
    for(i=0;i<N;i++) scanf("%lld",&Data[i]);
    scanf("%d",&M);
    int Left=0,Right=N;
    for(i=0;i<M;i++){
        scanf("%d",&T);
        Left=0,Right=N;
        while(Left<Right){
            j=(Left+Right)/2;
            if(Data[j]<=T) Left=j+1;
            else{
                Right=j;
            }
        }
        ANS[i]=Left;
    }
    for(i=0;i<M;i++) printf("%lld\n",ANS[i]);
    return 0;
}