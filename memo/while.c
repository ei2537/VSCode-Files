#include<stdio.h>

int main () {
    long long N,Left;
    scanf("%lld%lld",&N,&Left);
    if(Left==0){
        printf("<");
        while(N>0){
            printf("=");
            N--;
        }
    printf("\n");
    }
    else if(Left==-1){
        while(N>0){
            printf("=");
            N--;
        }
    printf(">\n");
    }
    else{
        printf("Please enter 0 to choose the left or -1 to choose the right.\n");
    }
    return 0;
}