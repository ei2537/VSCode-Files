#include<stdio.h>

int main () {
    char c;
    int a,b=0;
    for(a='a';a<='z';a++){
        scanf("%c ",&c);
        if(a!=c){
            b++;
        }
    }
    printf("%d\n",b);
    return 0;
}
