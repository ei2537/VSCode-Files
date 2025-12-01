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

int main(){
    int n;
    cin >> n;
    set <int> a;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a.insert(x);
    }
    for(int x:a){
        if(a.count(x+3)&&a.count(x+6)){
            cout << "Yes" << endl;
            return 0;
            }
        }
    cout << "No" << endl;
    return 0;
}

