#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N,K,Count=0;
    cin >> N;
    vector <int> A(N ,0);
    for(int i=0;i<N;i++) cin >> A[i];
    sort ( A.rbegin(), A.rend () );
    cin >> K;
    for(int i=0;i<N;i++){
        if(A[i]>=K) Count++;
        else break;
    }
    cout << Count << endl;
    return 0;
}