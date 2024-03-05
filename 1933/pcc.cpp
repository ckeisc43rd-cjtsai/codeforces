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
		int a, b, l;cin>>a>>b>>l;
		int sum=1;int d;
		for(int k=l; !(k%a); k/=a){
			int s=k;
			while(!(s%b)){
				sum++;
				s/=b;
			}sum++;
			d=k;
		}
		int s=d;
			while(!(s%b)){
				sum++;
				s/=b;
			}
		cout<<sum<<'\n';
	}
}
