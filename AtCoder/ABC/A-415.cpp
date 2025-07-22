#include <bits/stdc++.h>
#define endl "\n"
#define ll long long 
using namespace std;

int main(){
    int N,X;
    bool Yn=false;
    cin >> N;
    vector <int> A(N,0);
    for(int i=0;i<N;i++) cin >> A[i];
    cin >> X;
    for(int i=0;i<N;i++){
        if(A[i]==X) Yn=true;
    }
    if(Yn) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}