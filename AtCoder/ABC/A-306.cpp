#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;

int main(){
    int N;
    cin >> N;
    vector <char> S(N);
    for(int i=0;i<N;i++)cin >> S[i];
    for(int i=0;i<N;i++) cout << S[i] << S[i];
    cout << endl;
    return 0;
}