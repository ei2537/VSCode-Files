#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
bool day(int m,int d){
    return(m==7&&d==4);
}
int main(){
    int m,d;
    cin >> m >> d;
    if(day(m,d)) cout << "Happy Birthday!" << endl;
    return 0;
}
