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
    vector <int> a(13);
    bool y3=0,y2=0;
    for(int i=0;i<7;i++){
        int x;
        cin >> x;
        a[x-1]++;
    }
    for(int i=0;i<13;i++){
        if(!y3&&a[i]>=3) y3=1;
        else if(a[i]>=2) y2=1;
        if(y3&&y2) break;
    }
    Yn(y3&&y2);
    return 0;
}