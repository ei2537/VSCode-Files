#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    int T;
    cin >> T;
    for(int i=0;i<T;i++){
        int N;
        cin >> N;
        string s;
        cin >> s;
        
        vector<bool> safe(1<<N,false);
        safe[0]=true;
        for(int j=1;j<(1<<N);j++){
            if(s[j-1]=='0'){
                safe[j]=true;
            }
        }
        vector<bool> yn(1<<N,false);
        yn[0]=true;
        for(int mask=0;mask<(1<<N);mask++){
            if(!yn[mask])continue;
            for(int drug=0;drug<N;drug++){
                if(mask&(1<<drug))continue;
                int nmask=mask|(1<<drug);
                if(safe[nmask]){
                    yn[nmask]=true;
                }
            }
        }
        if(yn[(1<<N)-1]){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}