#include<stdio.h>

int main () {
    int i=0,c=0;
    char A[1000001]={};
    scanf("%s",A);
    while(A[i]!='\0'){
        if('a'<=A[i]&&A[i]<='z'){
            c++;
        }else if('A'<=A[i]&&A[i]<='Z'){
            c++;
        }
        i++;
    }
    printf("%d\n",c);
    return 0;
}