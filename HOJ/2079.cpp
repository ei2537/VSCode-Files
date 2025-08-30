#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define IMAX INT_MAX
#define IMIN INT_MIN
#define LLMAX LLONG_MAX
#define LLMIN LLONG_MIN
using namespace std;
void Yn(bool b,const std::string& yes="Yes",const std::string& no="No"){
    std::cout << (b?yes:no) << '\n';
}

int main(){
    int n;
    cin >> n;
    string s="Hello Teruto Kun!";
    for(int i=0;i<n;i++){
        string cmd;
        cin >> cmd;
        if(cmd=="U"){
            int x;
            cin >> x;
            if(x>=1&&x<=s.size()&&isalpha(s[x-1])){
                s[x-1]=toupper(s[x-1]);
            }
        }else if(cmd=="L"){
            int x;
            cin >> x;
            if(x>=1&&x<=s.size()&&isalpha(s[x-1])){
                s[x-1]=tolower(s[x-1]);
            }
        }else if(cmd=="R"){
            int l,r;
            cin >> l >> r;
            if(l>=1&&r<=s.size()&&l<=r){
                reverse(s.begin()+l-1,s.begin()+r);
            }
        }else if(cmd=="A"){
            string t;
            cin >> t;
            s+=t;
        }else if(cmd=="D"){
            int k;
            cin >> k;
            if(k<=s.size()){
                s.erase(s.end()-k,s.end());
            }
        }
    }
    cout << s << endl;
    return 0;
}
 