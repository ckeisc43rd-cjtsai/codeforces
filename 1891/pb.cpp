#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;

signed main(){
	int arr[31];
	arr[0]=1;
	for(int i=1; i<30; i++) arr[i]=arr[i-1]*2;
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n, q;cin>>n>>q;
		vector<int> tp(40, -1);
		vector<int> num(n);
		vector<int> add(40, 0);
		for(int i=0; i<n; i++) cin>>num[i];
		for(int i=0; i<q; i++){
			int k;cin>>k;
			for(int j=30; j>=k; j--){
				if(tp[j]==-1) {tp[j]=k;add[j]+=arr[k-1];}
				else if(tp[j]>k){tp[j]=k;add[j]+=arr[k-1];}
			}
		}
		for(int i=0; i<n; i++){
			bool det=true;
			for(int j=30; j>=1; j--){
				if(!(num[i]%(1<<j))) {
					cout<<num[i]+add[j]<<' ';
					det=false;
					break;
				}
			}if(det) cout<<num[i]<<' ';
		}cout<<'\n';
	}
}
