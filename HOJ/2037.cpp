#include <bits/stdc++.h>
#define endl "\n"
#define ll long long 
using namespace std;
int main(){
    int N,n;
    cin >> N;
    n=N;
    for(int i=0;i<N;i++){
        for(int j=0;j<n;j++){
            if((i+2)%2==0){
                cout << "R";
            }else cout << "L";
        }
        n--;
    }
    cout << endl;
    return 0;
}