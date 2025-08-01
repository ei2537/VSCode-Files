#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    int N,L,R;
    cin >> N >> L >> R;
    string S;
    cin >> S;
    
    bool allO=true;
    for(int i=L-1;i<=R-1;i++){
        if(S[i]!='o'){
            allO=false;
            break;
        }
    }
    
    if(allO) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}