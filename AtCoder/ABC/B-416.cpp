#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    string S;
    cin >> S;
    string T=S;
    int n=S.length();
    vector<pair<int,int>> seg;
    int start=0;
    for(int i=0;i<=n;i++){
        if(i==n||S[i]=='#'){
            if(i>start){
                seg.push_back({start,i-1});
            }
            start=i+1;
        }
    }
    for(auto segment:seg){
        if(segment.second>=segment.first){
            int mid=(segment.first+segment.second)/2;
            T[mid]='o';
            for(int i=segment.first;i<=segment.second;i++){
                if(i!=mid){
                    T[i]='.';
                }
            }
        }
    }
    cout << T << endl;
    return 0;
}
