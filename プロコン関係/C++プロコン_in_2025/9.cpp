#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
    long long N;
    cin >> N;
    long long now_T=0;
    long long total_T=0;
    for(int i=0;i<N;i++){
        int A,B;
        cin >> A >> B;

        //もし今の時刻がA以下なら → つまり「次の人はまだ来てない or ちょうど来た」
        if(now_T<=A){
            //待ち時間が発生しない
            now_T=A+B;
        }

        //もし、すでに次の人が来てる（待たせてる）なら
        else{
            //待ち時間が発生する。
            total_T+=now_T-A;
            now_T+=B;
        }
    }
    cout << total_T/N << endl;
    return 0;
}