#include<stdio.h>
int C[74000];
int main () {
    int i,N,X,left=0,right=0,MAX=0;
    long long sum=0;
    scanf("%d%d",&X,&N);
    for(i=0;i<N;i++) scanf("%d",&C[i]);
    while(right<N){
        sum+=C[right];
        while(sum>X){
            sum-=C[left];
            left++;
        }
        if(right-left+1>MAX){
            MAX=right-left+1;
        }
        right++;
    }
    printf("%d\n",MAX);
    return 0;
}