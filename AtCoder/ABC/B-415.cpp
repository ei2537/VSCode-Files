#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    string S;
    cin >> S;
    vector<int> pos;
    for(int i=0;i<S.length();i++){
        if(S[i]=='#'){
            pos.push_back(i+1);
        }
    }
    for(int i=0;i<pos.size();i+=2){
        cout << pos[i] << "," << pos[i+1] << endl;
    }
    return 0;
}