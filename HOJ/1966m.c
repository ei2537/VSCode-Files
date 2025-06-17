#include<stdio.h>

int main () {
    int i,N,x;
    float y;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d%f",&x,&y);
        printf("%f\n",(float)x+y);
    }
    return 0;
}