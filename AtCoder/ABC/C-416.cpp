#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

vector<string> S;
vector<string> ans;
int N,K;

void generate(string current,int depth){
    if(depth==K){
        ans.push_back(current);
        return;
    }
    for(int i=0;i<N;i++){
        generate(current+S[i],depth+1);
    }
}

int main(){
    int X;
    cin >> N >> K >> X;
    S.resize(N);
    for(int i=0;i<N;i++){
        cin >> S[i];
    }
    generate("",0);
    sort(ans.begin(),ans.end());
    cout << ans[X-1] << endl;
    return 0;
}