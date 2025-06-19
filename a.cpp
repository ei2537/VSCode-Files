#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;
//WTF
int main(){
    int M,N,ans;
    cin >> M >> N;
    vector <char> C(N);
    for(int i=0;i<N;i++) cin >> C[i];
    vector <vector <int> > Data(M,vector <int> (N));
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cin >> Data[i][j];
        }
    }
    for(int i=0;i<N;i++){
        ans=0;
        for(int j=0;j<M;j++){
            ans+=Data[j][i];
        }
        cout << C[i] << " " << ans/M << endl;
    }
    return 0;
}