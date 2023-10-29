#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> mini;
		vector<int> sec;
		for(int i=0; i<n; i++){
			int m;cin>>m;
			vector<int> li(m);
			for(int j=0; j<m; j++){
				cin>>li[j];
			}
			sort(li.begin(), li.end(), less<int>());
			sec.push_back(li[1]);
			mini.push_back(li[0]);
		}sort(sec.begin(), sec.end(), less<int>());
		sort(mini.begin(), mini.end(), less<int>());
		int sum=0;
		for(int x:sec) sum+=x;
		//cout<<sum<<'\n';
		sum-=sec[0];
		sum+=mini[0];
		cout<<sum<<'\n';
	}
}
