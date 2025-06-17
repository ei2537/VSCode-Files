#include<stdio.h>

int main () {
    int i,N,A[1000];
    scanf("%d",&N);
    for(i=0;i<N;i++){
    scanf("%d",&A[i]);
    }
    for(i=i-1;i>=0;i--){
    printf("%d\n",A[i]);
    }
    return 0;
}