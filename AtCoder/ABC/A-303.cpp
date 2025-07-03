#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main() {
    int N;
    bool Yn=1;
    cin >> N;
    string S,T;
    cin >> S >> T;
    for(int i=0;i<N;i++){
        if(S[i]!=T[i]){
            if((S[i]=='l'||S[i]=='1')&&(T[i]=='l'||T[i]=='1')) continue;
            if((S[i]=='0'||S[i]=='o')&&(T[i]=='0'||T[i]=='o')) continue;
            Yn=0;
        }
    }
    if(Yn) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
