#include<stdio.h>

int main () {
    int i,N;
    scanf("%d",&N);
    int M[N];
    for(i=0;i<N;i++) scanf("%d",&M[i]);
    for(i=0;i<N;i++){
        if(M[i]==1) printf("Curry\n");
        else if(M[i]==2) printf("Kraage\n");
        else if(M[i]==3) printf("Steak\n");
        else if(M[i]==4) printf("Ice Cream\n");
        else if(M[i]==5) printf("Coffee\n");
    }
    return 0;
}