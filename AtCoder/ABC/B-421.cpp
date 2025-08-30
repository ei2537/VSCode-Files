#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define IMAX INT_MAX
#define IMIN INT_MIN
#define LLMAX LLONG_MAX
#define LLMIN LLONG_MIN
using namespace std;
void Yn(bool b,const std::string& yes="Yes",const std::string& no="No"){
    std::cout << (b?yes:no) << '\n';
}

unsigned long long rev10(unsigned long long x){
    unsigned long long r=0;
    while(x){
        r=r*10+(x%10);
        x/=10;
    }
    return r;
}
int main() {
    unsigned long long X,Y;
    cin >> X >> Y;
    unsigned long long a_prev=X;
    unsigned long long a_curr=Y;

    for(int i=3;i<=10;i++){
        unsigned long long s=a_prev+a_curr;
        unsigned long long A=rev10(s);
        a_prev=a_curr;
        a_curr=A;
    }
    cout << a_curr << '\n';
    return 0;
}