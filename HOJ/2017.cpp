#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N,Q;
    cin >> N;
    vector<int> A(N,0);
    for( int i=0;i<N;i++ ) cin >> A[i];
    sort ( A.begin(), A.end () );
    cin >> Q;
    vector<int> X(Q,0);
    for( int i=0;i<Q;i++ ) cin >> X[i];
    for( int i=0;i<Q;i++ ){
        if( binary_search( A.begin(),A.end(),X[i])==1 ) cout << "Yes\n";
        else cout << "No\n"; 
    }
    return 0;
}