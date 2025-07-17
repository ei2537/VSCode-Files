#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int pascal(int n,int k){
    if(k==0||k==n)return 1;
    return pascal(n-1,k-1)+pascal(n-1,k);
}
int main(){
    int n;
    cin >> n;
    for(int i=0;i<=n;i++){
        cout << pascal(n,i);
        if(i<n)cout << " ";
    }
    cout << endl;
    return 0;
}