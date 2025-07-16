#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

typedef struct{
    float tx;
    float ty;
}txy;
int main(){
    int x,y;
    txy A,B;
    cin >> A.tx >> A.ty >> B.tx >> B.ty;
    if(A.tx>B.tx) printf("%f ",A.tx);
    else printf("%f ",B.tx);
    if(A.ty<B.ty) printf("%f\n",A.ty);
    else printf("%f\n",B.ty);
    return 0;
}