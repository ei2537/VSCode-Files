#include<stdio.h>

int main () {
    int A,B;
    scanf("%d %d",&A,&B);
    if(A<10&&A>0&&B<10&&B>0){
        printf("%d\n",A*B);
    }else{
        printf("-1\n");
    }
    return 0;
}
