#include <bits/stdc++.h>
#define pii pair<int, int>
#define ff first
#define ss second
using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		static int re;cin>>re;
		int tmp=0;//cin>>tmp;
		vector<int> hei(200007, 0);
		vector<int> has(200007,0);
		//hei[0]=tmp;
		//has[hei[0]-1]++;
		bool run =1;
		int aaaaa=re;
		
		for(int i=0; i<re; i++){
	//		int tsp=n;
			int tp;cin>>tp;
			if(tp<=re) hei[i]=tp;
			else{
				cout<<"NO\n";
				goto die;
			}
			has[hei[i]-1]++;
		}
		
			for(int i=re-2; i>=0; i--){
				has[i]+=has[i+1];
			}
		
		
			for(int i=0; i<re; i++){
				if(has[i]!=hei[i]){
					cout<<"NO\n";
					goto die;
				}
			}
		
		cout<<"YES\n";
		die:
		int aaa;
		//cout<<"hehe";
	}
}
