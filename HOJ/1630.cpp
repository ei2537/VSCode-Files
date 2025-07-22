#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    int N;
    long long M;
    cin >> N >> M;
    vector<long long> cost(N),value(N);
    for(int i=0;i<N;i++){
        cin >> cost[i] >> value[i];
    }
    long long ans=0;
    for(int mask=0;mask<(1<<N);mask++){
        long long cosT=0;
        long long valT=0;
        for(int i=0;i<N;i++){
            if(mask&(1<<i)){
                cosT+=cost[i];
                valT+=value[i];
            }
        }
        if(cosT<=M){
            ans=max(ans,valT);
        }
    }
    
    cout << ans << endl;
    return 0;
}