#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<unsigned long long> pre(1,1);
    for(int i=1;i<=n;i++){
        vector<unsigned long long> cur(i+1);
        cur[0]=cur[i]=1;
        for(int j=1;j<i;j++){
            cur[j]=pre[j-1]+pre[j];
        }
        pre=cur;
    }
    for(int i=0;i<=n;i++){
        cout << pre[i];
        if(i<n) cout << " ";
    }
    cout << endl;
    return 0;
}
