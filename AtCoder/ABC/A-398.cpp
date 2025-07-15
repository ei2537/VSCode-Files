#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    int N;
    string ans;
    cin >> N;
    if(N%2==0){
        for(int i=0;i<N/2-1;i++){
            ans.push_back('-');
        }
        ans.push_back('=');
        ans.push_back('=');
        for(int i=0;i<N/2-1;i++){
            ans.push_back('-');
        }
    }else{
        for(int i=0;i<N/2;i++){
            ans.push_back('-');
        }
        ans.push_back('=');
        for(int i=0;i<N/2;i++){
            ans.push_back('-');
        }
    }
    cout << ans << endl;
    return 0;
}