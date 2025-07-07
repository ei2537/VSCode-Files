#include<stdio.h>

int main () {
    int i,j,most,max=0,temp,N,X,C=0;
    scanf("%d%d",&N,&X);
    int V[N];
    for(i=0;i<N;i++) scanf("%d",&V[i]);
    for(i=0;i<N;i++){
        most=i;
        for(j=i;j<N;j++){
            if(V[j]<V[most]) most=j;
        }
        temp=V[i];
        V[i]=V[most];
        V[most]=temp;
        if(max+V[i]<=X){
            max+=V[i];
            C++;
        }
    }
    printf("%d\n",C);
    return 0;
}