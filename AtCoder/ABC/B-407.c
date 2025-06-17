#include<stdio.h>

int main () {
    int i,i2,X,Y,c=0,Xc,Yc;
    double ans=0;
    scanf("%d%d",&X,&Y);
    for(i=1;i<=6;i++){
        for(i2=1;i2<=6;i2++){
            Xc=i+i2;
            Yc=i-i2;
            if(Yc<0) Yc=i2-i;
            if(Xc>=X||Yc>=Y){
                c++;
            }
        }
    }
    ans+=c/36.0;
    printf("%.30lf",ans);
    return 0;
}