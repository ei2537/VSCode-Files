#include<stdio.h>

int main () {
    int i,A,B,C,ans=0,C1=0,C10=0,C100=0,C10h=0;
    scanf("%d%d%d",&A,&B,&C);
    ans+=A+B+C;
    while(ans>9){
        ans-=10;
        C10++;
    }
    C10h+=C10;
    if(C10>=10){
        while(C10>9){
            C10-=10;
            C100++;
        }
    }
    C10=0;
    C10+=C10h;
    ans=0;
    ans+=A+B+C-C10*10;
    C10-=C100*10;
    while(ans>0){
        ans-=1;
        C1++;
    }
    printf("%d\n",C1+C10+C100);
    return 0;
}