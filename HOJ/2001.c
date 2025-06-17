#include<stdio.h>

int main () {
    long long N,Left=0,Right=7400000000,mid;
    scanf("%lld",&N);
    while(Left<Right){
        mid=(Left+Right)/2;
        if(mid<N){
            Left=mid+1;
        }else{
            Right=mid;
        }
        printf("%lld\n",mid);
    }
    return 0;
}