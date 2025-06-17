#include<stdio.h>

int main () {
    int i,Err=0,N,log=0;
    scanf("%d",&N);
    char S[8]={};
    for(i=1;i<=N;i++){
        scanf("%s",S);
        if(S[0]=='l'&&S[3]=='i'){
            log=1;
        }else if(S[0]=='l'&&S[3]=='o'){
            log=0;
        }else if(S[0]=='p'&&S[1]=='r'){
            if(log!=1){
                Err++;
            }
        }else if(S[0]=='p'&&S[1]=='u'){
        }
    }
    printf("%d\n",Err);
    return 0;
}