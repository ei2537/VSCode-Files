#include<stdio.h>

int main () {
    int i=0,temp=0,max=0;
    char S[74001];
    scanf("%s",S);
    for(i=0;S[i]!='\0';i++){
        if(S[i]=='a'||S[i]=='b'||S[i]=='m'||S[i]=='k'){
            temp++;
            if(temp>max) max=temp;
        }else temp=0;
    }
    printf("%d\n",max);
    return 0;
}