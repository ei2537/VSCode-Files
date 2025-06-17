#include<stdio.h>

int main () {
    int A,B,N,i,End=0;
    scanf("%d%d%d",&N,&A,&B);
    int M[N];
    for(i=0;i<N;i++){
        scanf("%d",&M[i]);
    }
    i=0;
    while(End!=1){
        if(A+B==M[i]){
        printf("%d\n",i+1);
        End=1;
        }else{
            i+=1;
        }
    }
    return 0;
}