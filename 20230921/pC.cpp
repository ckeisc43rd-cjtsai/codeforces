#include <bits/stdc++.h>
using namespace std;

const int arr[10][10]={{
	1, 1, 1, 1, 1, 1, 1, 1, 1 ,1,
},{
	1, 2, 2, 2, 2, 2, 2, 2, 2, 1
},{
	1, 2, 3, 3, 3, 3, 3, 3, 2, 1
}, {
	1, 2, 3, 4, 4, 4, 4 ,3, 2, 1
}, {
	1, 2, 3, 4, 5, 5, 4, 3, 2, 1
}, {
	1, 2, 3, 4, 5, 5, 4, 3, 2, 1

}, {
	1, 2, 3, 4, 4, 4, 4 ,3, 2, 1

},{
	1, 2, 3, 3, 3, 3, 3, 3, 2, 1

},{
	1, 2, 2, 2, 2, 2, 2, 2, 2, 1

},{
	1, 1, 1, 1, 1, 1, 1, 1, 1 ,1,

}
};

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int ans=0;
		for(int i=0; i<10; i++){
			string x;cin>>x;
			for(int j=0; j<10; j++){
				if(x[j]=='X') ans+=arr[i][j];
			}
		}cout<<ans<<'\n';
	}
}
