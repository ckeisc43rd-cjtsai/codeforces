#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

signed main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> trap(207, 0);
		for(int i=0; i<n; i++){
			int a, b;cin>>a>>b;
			if(trap[a]) trap[a]=min(trap[a], b);
			else trap[a]=b;
		}
		int maxi=INT32_MAX;
		for(int i=1; i<201; i++){
			if(!trap[i]) continue;
			int tmp=i+(trap[i]-1)/2;
			maxi=min(maxi, tmp);
		}
		cout<<maxi<<'\n';
	}
}
