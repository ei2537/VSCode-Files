#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
    long long N;
    cin >> N;
    long long now_T=0;
    long long total_T=0;
    for(int i=0;i<N;i++){
        int A,B;
        cin >> A >> B;
        if(now_T<=A){
            now_T=A+B;
        }else{
            total_T+=now_T-A;
            now_T+=B;
        }
    }
    cout << total_T/N << endl;
    return 0;
}
