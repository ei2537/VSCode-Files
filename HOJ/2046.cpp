#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    int N,X;
    cin >> N >> X;
    vector<int> V(N);
    for(int i=0;i<N;i++){
        cin >> V[i];
    }
    int maxC=0;
    for(int mask=0;mask<(1<<N);mask++){
        int sum=0;
        int c=0;
        for(int i=0;i<N;i++){
            if(mask&(1<<i)){
                sum+=V[i];
                c++;
            }
        }
        if(sum<=X){
            maxC=max(maxC,c);
        }
    }
    cout << maxC << endl;
    return 0;
}