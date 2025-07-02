#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;

int main(){
    int N,T,max_C=0,ans=0;
    cin >> N >> T;
    vector <int> C(N),R(N);
    for(int i=0;i<N;i++) cin >> C[i];
    for(int i=0;i<N;i++){
        cin >> R[i];
        if(C[i]==T&&R[i]>max_C){
            max_C=R[i];
            ans=i+1;
        }
    }
    if(ans==0){
        max_C=R[0];
        ans=1;
        for(int i=1;i<N;i++){
            if(C[0]==C[i]&&R[i]>max_C){
                max_C=R[i];
                ans=i+1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}