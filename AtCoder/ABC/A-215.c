#include<stdio.h>

int main () {
    char S[16];
    scanf("%s",S);
    if(S[0]=='H'&&S[1]=='e'&&S[2]=='l'&&S[3]=='l'&&S[4]=='o'&&S[5]==','&&S[6]=='W'&&S[7]=='o'&&S[8]=='r'&&S[9]=='l'&&S[10]=='d'&&S[11]=='!'&&S[12]=='\0'){
        printf("AC\n"); 
        }else{
        printf("WA\n");
        }
    return 0;
}