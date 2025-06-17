#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N,Q,Qtype,ofs=0;
    cin >> N >> Q;
    vector <int> A(N,0);
    for(int i=0;i<N;i++) A[i]=i+1;
    for(int i=0;i<Q;i++){
        cin >> Qtype;
        int p,x,k;
        if(Qtype==1){
            cin >> p >> x;
            int idx=(ofs+p-1)%N;
            A[idx]=x;
        }else if(Qtype==2){
            cin >> p;
            int idx=(ofs+p-1)%N;
            cout << A[idx] << "\n";
        }else if(Qtype==3){
            cin >> k;
            ofs=(ofs+k)%N;
        }
    }
    return 0;
}