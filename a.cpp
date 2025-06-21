#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<char> server;
    vector<vector<char>> pc(N);
    for(int i=0;i<Q;i++){
        int a,p;
        cin >> a >> p;
        if(p<1||p>N) continue;
        p--;
        if(a==1){
            pc[p]=server;
        }else if(a==2){
            string s;
            cin >> s;
            for(int i=0;i<s.size();i++){
                pc[p].push_back(s[i]);
            }
        }else if(a==3){
            server=pc[p];
        }
    }
    for(int i=0;i<server.size();i++){
        cout << server[i];
    }
    cout << endl;
    return 0;
}
