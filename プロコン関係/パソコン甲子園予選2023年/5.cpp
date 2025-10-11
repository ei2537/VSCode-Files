#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    for (ll i = 2; i * i <= n; ++i) {
        bool sosu=true;
        if(i%2==0){
            if(i!=2) sosu=false;
        }else{
            for(ll d=3;d*d<=i;d+=2){
                if(i%d==0){
                    sosu=false;
                    break;
                }
            }
        }
        if(!sosu)continue;
        ll pp=i*i;
        if(n%pp!=0) continue;
        ll q=n/pp;
        if(q==i) continue; 
        bool qPrime=true;
        if(q<2) qPrime=false;
        else if(q%2==0){
            if (q!=2) qPrime=false;
        }else{
            for(ll d=3;d*d<=q;d+=2){
                if(q%d==0){
                    qPrime=false;
                    break;
                }
            }
        }
        if(!qPrime) continue;
        cout << "Yes\n";
        return 0;
    }
    cout << "No\n";
    return 0;
}
