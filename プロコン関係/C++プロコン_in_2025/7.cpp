#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
    int N,Q,X;
    cin >> N >> Q;
    vector<int> ID(N);
    for(int i=0;i<N;i++) cin >> ID[i];
    sort(ID.begin(),ID.end());
    for(int i=0;i<Q;i++){
        cin >> X;
        if(binary_search(ID.begin(),ID.end(),X)){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
        return 0;
}
