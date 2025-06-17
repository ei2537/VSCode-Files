#include<stdio.h>

int main () {
    int i=0,N;
    scanf("%d",&N);
    long long n[N];
    for(i=0;i<N;i++) scanf("%lld",&n[i]);
    for(i=0;i<N;i++) printf("%lld\n",n[i]*(n[i]+1)/2);
    return 0;
}