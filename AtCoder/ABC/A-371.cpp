#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    int N,M,A;
    char B;
    cin >> N >> M;
    vector <int> house(N,0);
    vector <char> ans(M,0);
    for(int i=0;i<M;i++){
        cin >> A >> B;
        if(house[A-1]==0&&B=='M'){
            house[A-1]++;
            ans[i]='Y';
        }else ans[i]='N';
    }
    for(int i=0;i<M;i++){
        if(ans[i]=='Y') cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}