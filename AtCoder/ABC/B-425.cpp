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
    vector <int> a(n+1);
    for(int i=1;i<=n;i++) cin >> a[i];
    vector <int> tukatta(n+1,0),p(n+1);
    for(int i=1;i<=n;i++){
        if(a[i]!=-1){
            if(tukatta[a[i]]){
                cout <<"No" << endl;
                return 0;
            }
            tukatta[a[i]]=1;
            p[i]=a[i];
        }
    }
    vector <int> temp;
    for(int x=1;x<=n;x++) if(!tukatta[x]) temp.push_back(x);
    int idx=0;
    for(int i=1;i<=n;i++) if(a[i]==-1) p[i]=temp[idx++];
    cout << "Yes" << endl;
    for(int i=1;i<=n;i++) cout << p[i] << (i==n?'\n':' ');
}
