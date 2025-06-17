#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N,Q;
    cin >> N >> Q;
    vector <int> X(Q,0);
    vector <int> B(N,0);
    vector <int> Re;
    for(int i=0;i<Q;i++) cin >> X[i];
    for(int i=0;i<Q;i++){
        int xi;
        xi=X[i];
        if(xi>=1){
            B[xi-1]++;
            Re.push_back(xi);
        }else{
            int minC=B[0],minI=0;
            for(int j=0;j<N;j++){
                if(B[j]<minC){
                    minC=B[j];
                    minI=j;
                }
            }
            B[minI]++;
            Re.push_back(minI+1);
        }
    }
    for(int i=0;i<Q;i++) cout << Re[i] << " ";
    return 0;
}