#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define Imax INT_MAX
#define Imin INT_MIN
#define LLmax LLONG_MAX
#define LLmin LLONG_MIN
using namespace std;

auto Yn=[](bool b){cout << (b?"Yes":"No") << '\n';};

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(s[s.size()-3]=='t'&&s[s.size()-2]=='e'&&s[s.size()-1]=='a') cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    string S;
    cin >> S;
    int N=S.size();
    double ans=0.0;
    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            int len=j-i+1;
            if(len>=3&&S[i]=='t'&&S[j]=='t'){
                int cnt_t=0;
                for(int k=i;k<=j;k++){
                    if(S[k]=='t') cnt_t++;
                }
                if(cnt_t>=2){
                    double rate=(double)(cnt_t-2)/(len-2);
                    ans=max(ans,rate);
                }
            }
        }
    }
    cout << fixed << setprecision(17) << ans << endl;
    return 0;
}
