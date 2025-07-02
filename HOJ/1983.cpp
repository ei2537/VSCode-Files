#include <bits/stdc++.h>
#include <stdio.h>
#define endl "\n"
using namespace std;
int main() {
    double N,A,sum=0;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> A;
        sum+=A;
    }
    printf("%.2f\n", sum/N);
    return 0;
}
