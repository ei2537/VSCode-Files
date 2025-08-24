#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define IMX INT_MAX
#define IMN INT_MIN
#define LLMX LLONG_MAX
#define LLMN LLONG_MIN
using namespace std;

auto Yn = [](bool b) { cout << (b ? "Yes" : "No") << '\n'; };

int main () {
    int n,a,b;
    string s;
    cin >> n >> a >> b >> s;
    cout << s.substr(a,n-a-b) << endl;
    return 0;
}
