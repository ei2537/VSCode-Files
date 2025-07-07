#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i=0;i<N;i++){
        cin >> S[i];
    }
    set<string>results;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            if (i==j) continue;
            string combined=S[i]+S[j];
            results.insert(combined);
        }
    }
    cout << results.size() << endl;
    return 0;
}