#include <stdio.h>

int main() {
    int i,N,Yn=1,A[100];
    scanf("%d",&N);
    for (i=0;i<N;i++){
        scanf("%d", &A[i]);
    }
    for (i=0;i<N-1;i++){
        if (A[i]>=A[i+1]){
            Yn=0;
        }
    }
    if (Yn==1){
        printf("Yes\n");
    } else{
        printf("No\n");
    }
    return 0;
}
