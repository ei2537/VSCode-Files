#include<stdio.h>

int main () {
    int i=0,N,up=0,down=0,same=0;
    scanf("%d",&N);
    int A[N];
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    i=0;
    if(A[0]<=A[1]){
        while(i<N-1&&A[i]<=A[i+1]){
            if(A[i]<=A[i+1]){
                up++;
            }
            if(A[i]==A[i+1]){
                same++;
            }
            i++;
        }
    }else if(A[0]>=A[1]){
        while(i<N-1&&A[i]>=A[i+1]){
            if(A[i]>=A[i+1]){
                down++;
            }
            i++;
        }
    }
    if(up==N-1&&same!=N-1){
        printf("1\n");
    }else if(down==(N-1)){
        printf("2\n");
    }else if(same==N-1){
        printf("0\n");
    }else{
        printf("0\n");
    }
    return 0;
}
