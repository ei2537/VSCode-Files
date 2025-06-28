#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    string S,T;
    cin >> S >> T;
    for(int i=1;i<S.size();i++){
        if(isupper(S[i])){
            if(T.find(S[i-1])==string::npos) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}