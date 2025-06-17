#include<stdio.h>

int main () {
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    if(A<=B&&A<=C&&B<=C) printf("Yes\n");
    else if(A>=B&&A>=C&&B>=C) printf("Yes\n");
    else printf("No\n");
    return 0;
}