#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main(){
        int M,Q;
        cin >> M;
        map<char,string> commands;
        for(int i=0;i<M;i++){
                char C;
                string S;
                cin >> C >> S;
                commands[C]=S;
        }
        cin >> Q;
        queue<char> buffer;
        for(int i=0;i<Q;i++){
                string query;
                cin >> query;
                if(query=="IN"){
                        char C;
                        cin >> C;
                        buffer.push(C);
                }else if(query=="OUT"){
                        if(buffer.empty()){
                                cout << 0 << endl;
                        }else{
                                char C=buffer.front();
                                buffer.pop();
                                if(commands.find(C)!=commands.end()){
                                        cout << commands[C] << endl;
                                }else{
                                        cout << -1 << endl;
                                }
                        }
                }
        }
        return 0;
}
