#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define IMAX INT_MAX
#define IMIN INT_MIN
#define LLMAX LLONG_MAX
#define LLMIN LLONG_MIN
#define ain(a) for(auto& i:a) cin >> i;
using namespace std;
void Yn(bool b,const string& yes="Yes",const string& no="No"){
    cout << (b?yes:no) << endl;
}
 
int main() {
    int n;
    cin >> n;
    vector <int> a(2*n,0);
    for(int i=1;i<=2*n-1;i++){
        int x;
        cin >> x;
        a[x]++;
    }
    for(int i=1;i<=2*n-1;i++){
        if(a[i]==1){
            cout << i << endl;
            break;
        }
    }
    return 0;
}
