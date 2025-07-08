#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
    int Q;
    cin >> Q;
    stack <string> Gans;
    for(int i=0;i<Q;i++){
        int type;
        cin >> type;
        if(type==1){
            string G;
            cin >> G;
            Gans.push(G);
        }else if(type==2){
            Gans.pop();
        }else if(type==3){
            if(Gans.empty()){
                cout << -1 << endl;
            }else{
                cout << Gans.top() << endl;
            }
        }
    }
    return 0;
}
