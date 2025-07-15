#include <iostream>
using namespace std;

void Castle(int level) {
    if(level==1){
        cout << "*" << endl;
        return;
    }
    Castle(level-1);
    for (int i=0;i<level;i++){
        cout << "*";
    }
    cout << endl;
    Castle(level-1);
}
int main() {
    int N;
    cin >> N;
    Castle(N);
    return 0;
}
