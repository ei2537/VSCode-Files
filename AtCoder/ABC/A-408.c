#include<stdio.h>

int main () {
    int i,N,Yn=1;
    double T,temp=0.0,S,ans;
    scanf("%d%lf",&N,&S);
    for(i=0;i<N;i++){
        scanf("%lf",&T);
        if(T-temp>S+0.5) Yn=0;
        temp=T;
    }
    if(Yn==1) printf("Yes");
    else printf("No");
    return 0;
}