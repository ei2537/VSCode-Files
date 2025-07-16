#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    int N,K,X;
    cin >> N >> K >> X;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    
    vector<int> B;
    for(int i=0;i<N;i++){
        B.push_back(A[i]);
        if(i==K-1){
            B.push_back(X);
        }
    }
    
    for(int i=0;i<B.size();i++){
        cout << B[i];
        if(i<B.size()-1)cout << " ";
    }
    cout << endl;
    return 0;
}