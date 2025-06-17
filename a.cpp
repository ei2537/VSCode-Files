#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
    int Q,t,m,x;//a
    cin >> Q;
    queue <int> temp;
    queue <int> ans;
    for(int i=0;i<Q;i++){
        cin >> t;
        if(t==1){
            cin >> m;
            temp.push(m); 
        }else if(t==2){
            cin >> x;
            for(int j=0;j<x;j++){
                ans.push(temp.front());
                temp.pop();
            }
        }else if(t==3){
            cin >> x;
            for(int j=0;j<x;j++){
                temp.push(temp.front());
                temp.pop();
            }
        }
    }
    while ( ! ans.empty()){
        cout << ans.front() << endl;
        ans.pop();
    }
    return 0;
}