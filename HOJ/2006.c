#include<stdio.h>
long long A[740001];
long long ANS[740001];
long long SUM[740001]={};
int main () {
    int i,N,Q;
    int X,Y;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        scanf("%lld",&A[i]);
        SUM[i]+=SUM[i-1]+A[i];
    }
    scanf("%d",&Q);
    for(i=0;i<Q;i++){
        scanf("%d%d",&X,&Y);
        ANS[i]=SUM[Y]-SUM[X-1];
    }
    for(i=0;i<Q;i++){
        printf("%lld\n",ANS[i]);
    }
    return 0;
}