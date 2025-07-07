#include<stdio.h>

int main () {
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    if(A>=B&&A>=C){
        printf("%d\n",A);
    }else if(A<=B&&C<=B){
        printf("%d\n",B);
    }else if(A<=C&&B<=C){
        printf("%d\n",C);
    }else{
        printf("0\n");
    }
    return 0;
}