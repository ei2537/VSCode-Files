#include <iostream>
using namespace std;

int main() {
    int q;
    cin >> q;
    while(q--){
        long long n;
        cin >> n;
        cout << n*(n+1)/2 << '\n';
    }
    return 0;
}
