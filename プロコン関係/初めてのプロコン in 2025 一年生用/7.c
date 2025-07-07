#include<stdio.h>

int main () {
    float i,N,A,ans=0;
    scanf("%f",&N);
    for(i=0;i<N;i++){
        scanf("%f",&A);
        ans+=A;
    }
    printf("%.2f\n",ans/N);
    return 0;
}