#include<stdio.h>

int main () {
    long long a,b,x;
    scanf("%lld\n%lld\n%lld",&a,&b,&x);
    printf("%lld\n",(a+b)*(x-a));
    return 0;
}
