#include <iostream>
#include <string>
using namespace std;

void print_binary(unsigned long long n) {
    if(n==0){
        cout << "0\n";
        return;
    }
    string bin="";
    while(n>0){
        bin=(char)('0'+(n%2))+bin;
        n/=2;
    }
    for(size_t i=0;i<bin.size();i++){
        cout << bin[i];
        if(i!=bin.size()-1) cout << ' ';
    }
    cout << '\n';
}
int main() {
    unsigned long long N;
    cin >> N;
    print_binary(N);
    return 0;
}
