#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> D(N);
    for(int i=1;i<N;i++) cin >> D[i];
    vector<int> sum(N + 1, 0);
    for(int i=1;i<N;i++) sum[i + 1] = sum[i] + D[i];
    for(int i=1;i<N;i++){
        for(int j=i+1;j<=N;j++){
            cout << sum[j]-sum[i];
            if(j!=N) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
