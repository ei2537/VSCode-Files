#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define IMAX INT_MAX
#define IMIN INT_MIN
#define LLMAX LLONG_MAX
#define LLMIN LLONG_MIN
using namespace std;
void Yn(bool b,const std::string& yes="Yes",const std::string& no="No"){
    std::cout << (b?yes:no) << '\n';
}

int main() {
    int n;
    cin >> n;
    vector <int> a(101);
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a[x]++;
    }
    int temp=0,ans=0;
    for(int i=0;i<=100;i++){
        if(a[i]>=temp){
            temp=a[i];
            ans=i;
        }
    }
    cout << ans << endl;
    return 0;
}
