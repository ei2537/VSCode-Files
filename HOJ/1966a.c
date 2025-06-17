#include<stdio.h>

int main () {
    #include<stdio.h>
    int i,N,x;
    float y;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d%f",&x,&y);
        printf("%f\n",x+y);
    }
    return 0;
}