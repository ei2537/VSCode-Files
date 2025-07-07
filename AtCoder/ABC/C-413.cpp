#include <bits/stdc++.h>
using namespace std;

int main(){
    int Q;
    cin >> Q;
    vector<long long> V;
    vector<long long> C;
    int index=0;
    while(Q--){
        int type;
        cin >> type;
        if(type==1){
            long long c,x;
            cin >> c >> x;
            V.push_back(x);
            C.push_back(c);
        }
        else{
            long long k;
            cin >> k;
            long long sum=0;
            while(k>0&&index<V.size()){
                long long value=V[index];
                long long count=C[index];
                if(k>=count){
                    sum+=value*count;
                    k-=count;
                    index++;
                }
                else{
                    sum+=value*k;
                    C[index]-=k;
                    k=0;
                }
            }
            cout << sum << endl;
        }
    }
    return 0;
}
