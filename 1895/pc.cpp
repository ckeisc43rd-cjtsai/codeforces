#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define pb push_back
#define all(x) x.begin(),x.end()
#define ff first
#define ss second

int get_each(int x){
	int cnt=0;
	while(x){
		cnt+=(x%10);
		x/=10;
	}
	return cnt;
}

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n;cin>>n;
	vector<vector<int>> sin(6, vector<int>(60));
	vector<vector<int>> dou(6, vector<int>(60));
	vector<vector<int>> sinw(6, vector<int>(60));
	vector<vector<int>> douw(6, vector<int>(60));
	int ans=0;
	for(int i=0; i<n; i++){
		int t;cin>>t;
		if(t<10){
			sin[1][t]++;
			sinw[1][t]++;
		}else if(t<100){
			dou[2][t/10+t%10]++;
			douw[2][get_each(t)]++;
			if(ans/10==ans%10) ans++;
		}else if(t<1000){
			sin[3][get_each(t)]++;
			sinw[3][get_each(t)]++;
			sinw[1][get_each(t%100)-t/100]++;
		}else if(t<10000){
			dou[4][get_each(t)]++;
			douw[4][]
		}
	}

}
