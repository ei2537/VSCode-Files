#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    int N,ans,temp=0;
    cin >> N;
    for(int i=0;i<N;i++){
        int H;
        cin >> H;
        if(temp<H){
            temp=H;
            ans=i+1;
        }
    }
    cout << ans << endl;
    return 0;
}