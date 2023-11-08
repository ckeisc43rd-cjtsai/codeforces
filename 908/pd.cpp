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
    	vector<int> LIS;
		vector<int> li(n);
		vector<int> ind;
		int mini=INT32_MAX, maxi=INT32_MIN, mai;
	    for(int i = 0; i < n; ++i) {
        	int buf;
    	    cin >> buf;
			li[i]=buf;
			mini=min(mini, li[i]);
			if(buf>=maxi){
				maxi=buf;
				mai=i;
			}
			
			//st.insert(buf);
	        if(LIS.empty() || buf > LIS.back()) {
        	    LIS.push_back(buf);
				ind.pb(i);
    	    }
	        else {
            	auto p = lower_bound(LIS.begin(), LIS.end(), buf);
            	*p = buf;
				//ind[p-LIS.begin()]=i;
        	}
    	}
		maxi=LIS[LIS.size()-1];
		vector<int> sm, bg, mid;
		for(int i=0; i<m; i++){
			int a;cin>>a;
			if(a>=maxi) sm.pb(a);
			else if(a<=mini) bg.pb(a);
			else mid.pb(a);
		}
		sort(sm.begin(), sm.end(), greater<int>());
		sort(bg.begin(), bg.end(), greater<int>());
		sort(mid.begin(), mid.end(), greater<int>());
		vector<int> ans;
		for(int i=0; i<=mai; i++) ans.pb(li[i]);
		/*int sma=mid.size();
		int lip=0, lia=0;
		if(li[lip]<mid[lia]){
			ans.pb(li[lip]);
			lip++;
		}else{
			ans.pb(mid[lia]);
			lia++;
		}	
		while(true){
			if(lia==sma&&lip==n) break;
			if(lia==sma){
				ans.pb(li[lip]);
				lip++;
				continue;
			}
			if(lip==n){
				ans.pb(mid[lia]);
				lia++;
				continue;
			}
			if(mid[lia]<ans.back()){
				ans.pb(mid[lia]);
				lia++;
			}
		//break;
		}*/
		mai=ind[ind.size()-1];
		for(int x:sm) cout<<x<<' ';
		for(int i=0; i<=mai; i++) cout<<li[i]<<' ';
		for(int x:mid) cout<<x<<' ';
		for(int i=mai+1; i<n; i++) cout<<li[i]<<' ';
		for(int x:bg) cout<<x<<' ';
		cout<<'\n';
	}
    return 0;
}


