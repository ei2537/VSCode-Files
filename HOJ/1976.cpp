#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    vector <int> A ( 1000, 0 );
    cin >> N;
    for(int i=0;i<N;i++) cin >> A[i];
    for(int i=0;i<N;i++){
        cout << A[N-(i+1)] << "\n";
    }
    return 0;
}
