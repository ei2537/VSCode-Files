#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
    int N,M;
    cin >> N;
    vector<string> S(N);
    for(int i=0;i<N;i++) cin >> S[i];
    cin >> M;
    vector<string> T(M);
    for(int i=0;i<M;i++) cin >> T[i];
    set<string> real(T.begin(),T.end());
    vector<string> wasure;
    for(int i=0;i<N;i++){
        if(real.find(S[i])==real.end()){
            wasure.push_back(S[i]);
        }
    }
    sort(wasure.begin(),wasure.end());
    for(string item:wasure){
        cout << item << endl;
    }
    return 0;
}
