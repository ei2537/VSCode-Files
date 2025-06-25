#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;

int main(){
    int N,in=0,Io=0;
    char S;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> S;
        if(S=='|'&&in==0) in=1;
        else if(S=='|'&&in==1) in=0;
        else if(S=='*'&&in==1){
            Io=1;
            break;
            }
    }
    if(Io==1) cout << "in" << endl;
    else cout << "out" << endl;
    return 0;
}