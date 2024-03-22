#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;

int n, l;
pii li[3000];

bool chc(int m){
	int a=l-m;
	for(int j=n; j>=0; j--){
		multiset<int> ms;
		int sum=0;
		int cnt=0;
		while(sum+li[cnt].ss<a&&cnt<n){
			ms.insert(li[cnt].ss);
			sum+=li[cnt].ss;
			cnt++;
		}
		for(int i=cnt; i<n; i++){
			if(i!=m-1){
				ms.erase(ms.find(li[i-m].ss));
			}
			for()
		}
	}
}

bool cal(int l, int r){

}

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		cin>>n>>l;
		for(int i=0; i<n; i++) {cin>>li[i].ss>>li[i].ff;}
		for(int i=n; i<3000; i++){li[i]={0,0};}
		sort(li, li+n);
		int l=0, r=n;
		while(l<r){
			int mid=(l+r+1)/2;
			bool can=chc(mid);
			if(can){
				l=mid;
			}else{
				r=mid-1;
			}
		}	
		int ans=0;	
		for(int i=0; i<n; i++){
			int topper=li[i].ff;
			int sum=0;
			for(int j=0; j<=i; j++){
				priority_queue<int, vector<int>, greater<int>> pq;
				//if(li[j].ff<=topper){
				pq.push(li[j].ss);
				sum+=li[j].ss;
				//}
				while(sum>l-topper){
					sum-=pq.top();pq.pop();
				}
				int sz=pq.size();ans=max(ans, sz);
			}
		}cout<<ans<<'\n';
	}
}
