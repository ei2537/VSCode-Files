#include <stdio.h>
int main () {
    int N,Q,Yn;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++) scanf("%d",&A[i]);
    scanf("%d",&Q);
    int X[Q];
    for(int i=0;i<Q;i++) scanf("%d",&X[i]);
    for(int i=0;i<Q;i++){
        for(int j=0;j<N;j++){
            Yn=0;
            if(X[i]==A[j]){
                Yn=1;
                break;
                }
            }
        if(Yn==1) printf("Yes\n");
        else printf("No\n");
        }
    return 0;
}