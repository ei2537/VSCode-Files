#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int N,count=0;
    cin >> N;
    vector <char> S(N,0),T(N,0);
    for(int i=0;i<N;i++) cin >> S[i];
    for(int i=0;i<N;i++) cin >> T[i];
    for(int i=0;i<N;i++){
        if(S[i]==T[i]) count++;
        else if(S[i]=='1'&&T[i]=='l'||S[i]=='l'&&T[i]=='1') count++;
        else if(S[i]=='0'&&T[i]=='o'||S[i]=='o'&&T[i]=='0') count++;
    }
    if(count==N) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}