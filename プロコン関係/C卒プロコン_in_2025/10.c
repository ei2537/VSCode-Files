#include<stdio.h>
long long A[1000000];
int main () {
    int N,Up=0,Do=0;
    scanf("%d",&N);
    int i;
    for(i=0;i<N;i++) scanf("%lld",&A[i]);
    i=1;
    while(i<N&&A[i]>=A[i-1]){
        if(A[i]>A[i-1]){
            Up=1;
        }
        i++;
    }
    while(i<N&&A[i]<=A[i-1]){
        if(A[i]<A[i-1]){
            Do=1;
        }
        i++;
    }
    if(i==N&&Up==1&&Do==1) printf("1\n");
    else printf("0\n");
    return 0;
}