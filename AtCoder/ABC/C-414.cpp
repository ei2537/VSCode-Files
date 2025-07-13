#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

bool ten_Yn(long long number){
	string moji=to_string(number);
	string gyaku=moji;
	reverse(gyaku.begin(),gyaku.end());
	return moji==gyaku;
}
bool A_Yn(long long number,int Asin){
	vector<int> keta;
	if(number==0)return true;
	while(number>0){
		keta.push_back(number%Asin);
		number/=Asin;
	}
	vector<int> g_keta=keta;
	reverse(g_keta.begin(),g_keta.end());
	return keta==g_keta;
}
vector<long long> ten_kai(long long max){
	vector<long long> kai_list;
	for(int keta_one=1;keta_one<=9;keta_one++){
		if(keta_one<=max)kai_list.push_back(keta_one);
	}
	for(int keta_kazu=2;keta_kazu<=13;keta_kazu++){
		int keta_mae=(keta_kazu+1)/2;
		long long start=1;
		for(int i=1;i<keta_mae;i++)start*=10;
		long long end=start*10;
		
		for(long long mae=start;mae<end;mae++){
			string mae_moji=to_string(mae);
			string ato_moji=mae_moji;
			reverse(ato_moji.begin(),ato_moji.end());
			
			string kai_moji;
			if(keta_kazu%2==0){
				kai_moji=mae_moji+ato_moji;
			}else{
				kai_moji=mae_moji+ato_moji.substr(1);
			}
			
			long long kai_kazu=stoll(kai_moji);
			if(kai_kazu<=max){
				kai_list.push_back(kai_kazu);
			}else{
				break;
			}
		}
	}
	
	return kai_list;
}
int main(){
	int A進法;
	long long N最大;
	cin >> A進法 >> N最大;
	
	vector<long long> 十進法の回文たち=ten_kai(N最大);
	long long 合計=0;
	
	for(long long kai_kazu:十進法の回文たち){
		if(A_Yn(kai_kazu,A進法)){
			合計+=kai_kazu;
		}
	}
	
	cout << 合計 << endl;
	return 0;
}