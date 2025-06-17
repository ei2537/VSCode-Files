#include<stdio.h>

int main () {
    double A,B;
    scanf("%lf%lf",&A,&B);
    if(A>B){
        printf("%lf\n%lf\n",A-B,(A-B)/B);
    }else{
        printf("%lf\n%lf\n",B-A,(B-A)/B);
    }
    return 0;
}
