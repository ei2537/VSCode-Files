#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N,temp=0;
    cin >> N;
    vector < vector<int> > A ( 7, vector<int>(N,0) );
    vector <char> C(N);
    for(int i=0;i<N;i++) cin >> C[i];
    for(int i=0;i<7;i++){
        for(int j=0;j<N;j++){
            cin >> A[i][j];
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<7;j++){
            temp+=A[j][i];
        }
        cout << C[i] << " " << temp/7 << "\n";
        temp=0;
    }
    return 0;
}
