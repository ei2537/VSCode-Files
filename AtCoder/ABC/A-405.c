#include<stdio.h>

int main () {
    int R,X;
    scanf("%d%d",&R,&X);
    if(X==1&&1600<=R&&R<=2999) printf("Yes");
    else if(X==2&&1200<=R&&R<=2399) printf("Yes");
    else printf("No");
    return 0;
}