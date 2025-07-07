#include<bits/stdc++.h>
using namespace std;
int main(){
        string s;
        cin >> s;
        string rev=s;
        reverse(rev.begin(),rev.end());
        if(s==rev){
                cout << "Yes" << endl;
        }else{
                cout << rev << endl;
        }
        return 0;
}
