#include <iostream>
#include <vector>
#include <algorithm> //for lower_bound()
#define pb push_back
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
    	int n, m;
	    cin >> n>>m;
		vector<int> li(n);
		int mini=INT32_MAX, maxi=INT32_MIN, mai;
	    for(int i = 0; i < n; ++i) {
        	int buf;
    	    cin >> buf;
			li[i]=buf;
		}
	vector<int> q(m);
	for(int i=0; i<m; i++) cin>>q[i];
	sort(q.begin(), q.end(), greater<int>());
	int inl=0, inq=0;
	vector<int> ans;
	while(inl<n){
		if(q[inq]>li[inl]&&inq<m){
			ans.pb(q[inq]);
			inq++;
		}else{
			ans.pb(li[inl]);
			inl++;
		}
	}for(int x:ans) cout<<x<<' ';
	for(int i=inq; i<m; i++){
		cout<<q[i]<<' ';
	}cout<<'\n';
}
}
