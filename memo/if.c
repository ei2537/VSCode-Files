#include<stdio.h>

int main () {
    int A=1, B;
    while(A!=0){
        scanf("%d",&A);
        if(A!=0){
            scanf("%d",&B);
            printf("%d\n",A+B);
        }
    }
    return 0;
}
