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
		int last=-1;
		int maxi=INT32_MIN;
		int road=INT32_MIN;
		int onemax=INT32_MIN, twomax=INT32_MIN;
		for(int i=0; i<n; i++){
			int s;cin>>s;
			int as=abs(s);
			if(last==-1){
				maxi=max(maxi, s);
				last=as%2;
			}else if(last){
				if((as%2)){
					if(s<0){
						maxi=INT32_MIN;
						last=-1;
					}else{
						maxi=s;
						last=1;
					}
				}else{
					if(maxi+s>0){
						maxi=max(maxi+s, s);
						last=0;
					}else if(s>=0){
						maxi=s;
						last=0;
					}else{
						maxi=INT32_MIN;
						last=-1;
					}
				}
			
			}else{
				if(!(as%2)){
					if(s<0){
						maxi=INT32_MIN;
						last=-1;
					}else{
						maxi=s;
						last=0;
					}
				}else{
					if(maxi+s>0){
						maxi=max(s, maxi+s);
						last=1;
					}else if(s>=0){
						maxi=s;
						last=1;
					}else{
						maxi=INT32_MIN;
						last=-1;
					}
				}

			}road=max(road, maxi);
		}cout<<road<<'\n';
	}
}
