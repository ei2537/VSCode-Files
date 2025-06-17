#include<stdio.h>

int main () {
    char Ci[4],Cj[4];
    scanf("%s %s",Ci,Cj);
    if(Ci[0]==Cj[2]&&Ci[1]==Cj[1]&&Ci[2]==Cj[0]){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}