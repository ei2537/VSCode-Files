#include<stdio.h>

int main () {
    int i,j=0,N,Q,Yn=0;
    scanf("%d%d",&N,&Q);
    int ID[N],X[Q];
    for(i=0;i<N;i++) scanf("%d",&ID[i]);
    for(i=0;i<Q;i++) scanf("%d",&X[i]);
    for(i=0;i<Q;i++){
        Yn=0;
        for(j=0;j<N;j++){
            if(X[i]==ID[j]){
                Yn=1;
                break;
            }
        }
        if(Yn==1) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}