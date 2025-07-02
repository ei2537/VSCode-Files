#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main() {
    bool Yn=1;
    char Cb;
    vector <char> Ca(3);
    for(int i=0;i<3;i++){
    cin >> Ca[i];
    }
    for(int i=0;i<3;i++){
    cin >> Cb;
    if(Cb!=Ca[3-(i+1)]) Yn=0;
    }
    if(Yn) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
