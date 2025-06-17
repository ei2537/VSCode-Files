#include<stdio.h>

int main () {
    int i,A[3]={},C;
    scanf("%d%d%d",&A[0],&A[1],&A[2]);
    if(A[0]*A[1]==A[2]){
        C=1;
    }else if(A[0]*A[2]==A[1]){
        C=1;
    }else if(A[1]*A[0]==A[2]){
        C=1;
    }else if(A[1]*A[2]==A[0]){
        C=1;
    }else if(A[2]*A[0]==A[1]){
        C=1;
    }else if(A[2]*A[1]==A[0]){
        C=1;
    }else{
        C=-1;
    }
    if(C==1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}