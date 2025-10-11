#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main(){
    ll x1,x2,x3,x4,y1,y2,y3,y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    ll hen1=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    ll hen2=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
    ll hen3=(x3-x4)*(x3-x4)+(y3-y4)*(y3-y4);
    ll hen4=(x4-x1)*(x4-x1)+(y4-y1)*(y4-y1);
    ll tai13=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
    ll tai24=(x2-x4)*(x2-x4)+(y2-y4)*(y2-y4);
    if((hen1==hen2&&hen2==hen3&&hen4==hen1)&&((hen1+hen2==tai13)&&(hen2+hen3==tai24)&&(hen3+hen4==tai13)&&(hen4+hen1==tai24))) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
