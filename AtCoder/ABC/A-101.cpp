#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;

int main(){
    int ans=0;
    string S;
    cin >> S;
    for(int i=0;i<4;i++){
        if(S[i]=='+') ans++;
        else ans--;
    }
    cout << ans << endl;
    return 0;
}