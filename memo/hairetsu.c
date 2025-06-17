#include<stdio.h>

int main () {
    char S[101];
    int i,c=0,size=0;
    scanf("%s",S);
    while(S[size]!='\0'){
        size++;
    }
    for(i=0;i<size;i++){
        if(S[i]=='2'){
            c++;
        }
    }
    for(i=0;i<c;i++){
        printf("2");
    }
    printf("\n");
    return 0;
}