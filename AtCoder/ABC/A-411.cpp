#include <iostream>
#include <string>
#define endl "\n"
using namespace std;

int main() {
    string P;
    int L;
    cin >> P;
    cin >> L;
    if(P.length()>=L) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
