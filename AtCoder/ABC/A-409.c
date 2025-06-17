#include<stdio.h>

int main () {
    int N,Yn=0;
    char T[101]={},A[101]={};
    scanf("%d",&N);
    scanf(" %s",T);
    scanf(" %s",A);
    for(int i=0;i<N;i++){
        if(T[i]=='o'&&A[i]=='o'){
            Yn=1;
            break;
        }
    }
    if(Yn==1) printf("Yes\n");
    else printf("No\n");
    return 0;
}