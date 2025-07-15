#include <bits/stdc++.h>
using namespace std;
long long m(long long a,long long b,long x){
	return ((a+b)*(x-a));
}
int main(){
    int a,b,x;
        cin >> a >> b >> x;
        cout << m(a,b,x) << endl;
    return 0;
}
