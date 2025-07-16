#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
    int N;
    cin >> N;
    stack<pair<int,int>> st; 
    st.push({N,0});
    while(!st.empty()){
        int level=st.top().first;
        int state=st.top().second;
        st.pop();
        if(level==1){
            cout << "*" << endl;
            continue;
        }
        if(state==0){
            st.push({level,1});
            st.push({level-1,0});
        }
        else if(state==1){
            for(int i=0;i<level;i++) cout << "*";
            cout << endl;
            st.push({level,2});
            st.push({level-1,0});
        }
        else if(state==2){
        }
    }
    return 0;
}
