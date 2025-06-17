#include<stdio.h>

int main () {
    int i,ans=0;
    char S[5];
    scanf("%s",S);
    for(i=0;i!=4;i++){
        if(S[i]=='+'){
            ans++;
        }else if(S[i]=='-'){
            ans--;
        }
    }
    printf("%d\n",ans);
    return 0;
}