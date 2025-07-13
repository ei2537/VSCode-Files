#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	int N;
	cin >> N;
	string ans="";
	long long sizeT=0;
	for(int i=0;i<N;i++){
		char c;
		long long l;
		cin >> c >> l;
		if(l>100||sizeT>100-l){
			cout << "Too Long" << endl;
			return 0;
		}
		sizeT+=l;
		for(long long j=0;j<l;j++){
			ans+=c;
		}
	}
	cout << ans << endl;
	return 0;
}