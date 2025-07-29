#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    int N,X;
    cin >> N >> X;
    for(int i=0;i<N;i++){
        int a;
        cin >> a;
        if(a==X){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}