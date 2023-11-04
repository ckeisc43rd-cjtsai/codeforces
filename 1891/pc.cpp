#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		/*
		map<int, int> mp;
		set<int> st;
		for(int i=0; i<n; i++){
			int a;cin>>a;
			st.insert(a);
			mp[a]++;
		}
		vector<int> vc(st.size());
		int counter=0;
		for(int x:st){
			vc[counter]=x;
			counter++;
		}
		sort(vc.begin(), vc.end());
		*/
		vector<int> vc(n);
		for(int i=0; i<n; i++) cin>>vc[i];
		sort(vc.begin(), vc.end());
		int kk=0;
		int cnt=0;
		int fp=0, lp=n-1;
		while(lp>=fp){
			if(lp==fp){
				if(vc[lp]==1){
					cnt++;
					break;
				}
				while(true){
					if(kk<vc[lp]){
						if(kk==vc[lp]-1){
							cnt+=2;
							break;
						}else{
							cnt++;
							kk++;
							vc[lp]--;
						}
					}else{
						cnt++;
						break;
					}
				}
				break;
			}else if(kk>=vc[lp]){
				cnt++;
				lp--;
				kk=0;
			}else if(vc[fp]+kk>=vc[lp]){
				cnt+=vc[lp]-kk;
				cnt++;
				vc[fp]-=(vc[lp]-kk);
				if(!vc[fp]) fp++;
				lp--;
				kk=0;
			}else{
				cnt+=vc[fp];
				kk+=vc[fp];
				fp++;
			}//cout<<cnt<<' ';
		}cout<<cnt<<'\n';
	}
}
