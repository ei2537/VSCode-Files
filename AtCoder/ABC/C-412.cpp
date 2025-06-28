#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector <pair <int,int> > dom(N);
        vector <int> S(N);
        for(int i=0;i<N;i++){
            cin >> S[i];
            dom[i]={S[i],i};
        }
        sort(dom.begin(),dom.end());
        vector <int> ans(N,-1);
        queue <int> q;
        ans[0]=1;
        q.push(0);
        while(!q.empty()){
            int qdm=q.front(); q.pop();
            long long limit=(long long) S[qdm]*2;
            vector<pair<int,int>>::iterator it=upper_bound(dom.begin(), dom.end(), make_pair((int)limit, N));
            for(vector<pair<int,int>>::iterator itr=dom.begin(); itr != it; ++itr){
                int nxt=itr->second;
                if(ans[nxt]==-1){
                    ans[nxt]=ans[qdm]+1;
                    q.push(nxt);
                }
            }
            dom.erase(dom.begin(),it);
        }
        cout << ans[N - 1] << endl;
    }
    return 0;
}