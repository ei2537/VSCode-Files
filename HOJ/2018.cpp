#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int X,Y,Yn=0;
    cin >> X >> Y;
    if(X<Y&&abs(X)<abs(Y)) Yn=1;
    else if(X>Y&&abs(X)>abs(Y)) Yn=1;
    if(Yn==1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}