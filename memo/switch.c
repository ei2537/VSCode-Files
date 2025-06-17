#include<stdio.h>

int main () {
    int i,N,Cn[4]={};
    scanf("%d\n",&N);
    char C;
    for(i=0;i<N;i++){
        if (i==N-1) scanf("%c",&C);
        else scanf("%c\n",&C);
        switch(C){
            case 'A':
                Cn[0]++;
                break;
            case 'B':
                Cn[1]++;
                break;
            case 'C':
                Cn[2]++;
                break;
            default:
                Cn[3]++;
                break;
        }
    }
    printf("%d %d %d %d\n",Cn[0],Cn[1],Cn[2],Cn[3]);
    return 0;
}
