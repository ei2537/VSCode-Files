#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define Imax INT_MAX
#define Imin INT_MIN
#define LLmax LLONG_MAX
#define LLmin LLONG_MIN
using namespace std;
struct SegmentTree {
    vector<ll> data;
    int size;

    // 配列の初期値を決めておく
    ll syoki=0;
    ll f(ll a,ll b){
        // 最大値: max  最小値: min 総和 a+b
        return max(a,b);
    }

    SegmentTree(int n) {
    size = 1;
    while (size < n) {
        size <<= 1;
    }
        data.assign(2 * size, syoki);
    }

    ll query(int a, int b, int k, int l, int r) {
        if (r <= a || b <= l) {
            return(syoki);
        }
        if (a <= l && r <= b) {
            return(data[k]);
        }
        return(f(query(a, b, 2 * k + 1, l, (l + r) >> 1), query(a, b, 2 * k + 2, (l + r) >> 1, r)));
    }

    ll query(int a, int b) {
        return(query(a, b, 0, 0, size));
    }

    void update(int k, ll x) {
        k += size - 1;
        data[k] = x;
        while (k > 0) {
            k = (k - 1) >> 1;
            data[k] = f(data[2 * k + 1], data[2 * k + 2]);
        }
    }
};

int main () {
    int N,Q;
    cin >> N >> Q;
    SegmentTree que(N); //「SegmentTree␣名前(長さ)」で宣言
    for(int i=0;i<Q;i++){
        int c;
        cin >> c;
        if(c==1){
            int pos,x;
            cin >> pos >> x;
            que.update(pos-1,x);  //(更新場所,値)
        }else if(c==2){
            int l,r;
            cin >> l >> r;
            cout << que.query(l-1,r-1) << endl; //区間の指定。今回はl<=i<=rの区間
        }
    }
    return 0;
}