#include<stdio.h>

int main () {
    int N;
    scanf("%d",&N);
    char S[N+1];
    scanf("%s",S);
    printf("%c\n",S[N-1]);
    return 0;
}