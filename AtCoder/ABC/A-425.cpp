#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define IMAX INT_MAX
#define IMIN INT_MIN
#define LLMAX LLONG_MAX
#define LLMIN LLONG_MIN
#define ain(j) for(auto& i:j) cin >> i;
using namespace std;
void Yn(bool k,const string& yes="Yes",const string& no="No"){
    cout << (k?yes:no) << endl;
}
int main(){
    int n;
    cin >> n;
    int ans=0;
    for(int i=1;i<=n;i++){
        int temp=i*i*i;
        if(i%2==1) temp=-temp;
        ans+=temp;
    }
    cout << ans << endl;
    return 0;
}