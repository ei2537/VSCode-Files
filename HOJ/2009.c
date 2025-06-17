#include<stdio.h>

int main () {
    int i,j,N;
    scanf("%d",&N);
    long long X[N],most,temp;
    for(i=0;i<N;i++) scanf("%lld",&X[i]);
    for(i=0;i<N;i++){
        most=i;
        for(j=i;j<N;j++){
            if(X[j]<X[most]) most=j;
        }
        temp=X[i];
        X[i]=X[most];
        X[most]=temp;
    }
    for(i=0;i<N;i++) printf("%lld\n",X[i]);
    return 0;
}