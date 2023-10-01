#include <iostram>
#include <vector>
#include <algorithm>
using namespace std;

signed main(){
	int t;cin>>t;
	while(t--){
		int n, k;cin>>n>>k;
		vector<int> li(n+1);
		for(int i=0; i<n; i++) cin>>li[i];
		vector<int> pre(n+1);
		for(int i=0; i<n; i++){
			pre[li[i]]=i+1;
		}
	}
}
