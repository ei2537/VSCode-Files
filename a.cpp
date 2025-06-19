#include <iostream>
#include <vector>
#include <stack>
#define endl "\n"
using namespace std;

int main(){
    int Q,t,x,ans[4]={};
    cin >> Q;
    char c,temp;
    stack <char> Query;
    for(int i=0;i<Q;i++){
        cin >> t;
        if(t==1){
            cin >> c;
            Query.push(c);
        }else if(t==2){
            cin >> x;
            for(int j=0;j<x;j++){
                temp=Query.top();
                if(temp=='S') ans[0]++;
                else if(temp=='K') ans[1]++;
                else if(temp=='R') ans[2]++;
                else if(temp=='E') ans[3]++;
                Query.pop();
            }
        }else if(t==3){
            cin >> x;
            for(int j=0;j<x;j++) Query.pop();
        }
    }
    cout << ans[0] << " " <<  ans[1] << " " <<  ans[2] << " " <<  ans[3] << endl;
    return 0;
}