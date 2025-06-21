#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N,Q;
    cin >> N >> Q;
    vector<int> Math(N,0);
    int Bcount=0;
    for(int i=0;i<Q;i++){
        int A; 
        cin >> A;
        A--;
        int before=Math[A];
        int after=1-before;
        Math[A]=after;
        bool Lb=(A>0&&Math[A-1]==1);
        bool Rb=(A<N-1&&Math[A+1]==1);
        if(before==0&&after==1){
            if(!Lb&&!Rb)Bcount++;
            else if(Lb&&Rb)Bcount--;
        }else{
            if(Lb&&Rb)Bcount++;
            else if(!Lb&&!Rb)Bcount--;
        }
        cout << Bcount << "\n";
    }
    return 0;
}
