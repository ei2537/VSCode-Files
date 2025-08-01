#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    long long N;
    cin >> N;
    if(N==0){
        cout << "0" << endl;
        return 0;
    }
    string hex="";
    string digits="0123456789ABCDEF";
    while(N>0){
        hex=digits[N%16]+hex;
        N/=16;
    }
    for(int i=0;i<(int)hex.size();i++){
        cout << hex[i];
        if(i!=(int)hex.size()-1) cout << ' ';
    }
    cout << endl;
    return 0;
}
