#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;
const int dx[5]={
	1, 2, 5, 6, 8
};
signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	for(int i=100;i<400; i++){
		int t=i*i;
		multiset<int> mst;
		while(t){
			mst.insert(t%10);
			t/=10;
		}
		int cnt=0;
		bool suc=true;
		for(int x:mst){
			if(x!=dx[cnt]) suc=false;
			cnt++;
		}
		if(suc) cout<<i*i<<' ';
	}
}
