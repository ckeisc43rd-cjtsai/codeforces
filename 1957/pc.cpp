#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;

const int modd=1e9+7;
int powe(int x, int s){
	if(s==0) return 1;
	if(s==1) return x;
	int c=powe(x,s/2);
	if(s%2) return (c*c%modd)*x%modd;
	return c*c%modd;
}
	
const int MOD = 1e9 + 7; //常見的 10^9 + 7 就是個質數
int mabs(long long a, int mod = MOD) {
    return (a % mod + mod) % mod;
}
int madd(long long a, long long b, int mod = MOD) { // a + b
    return mabs(a % mod + b % mod, mod);
}
int mmin(long long a, long long b, int mod = MOD) { // a - b
    return mabs(a % mod - b % mod, mod);
}
int mmul(long long a, long long b, int mod = MOD) {
    return mabs((a % mod)*(b % mod), mod);
}	
int power(int a, int b) { //快速冪
    int ret = 1;
    while(b) {
        if(b & 1) ret = mmul(ret, a);
        b >>= 1;
        a = mmul(a, a);
    }
    return ret;
}
signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n, k;cin>>n>>k;
		set<int> st;
		for(int i=0; i<k; i++){
			int a, b;cin>>a>>b;
			st.insert(a);
			st.insert(b);
		}
		int c=n-st.size();
		int ans=0;
		int tmp=1;
		int cnt=1;
		for(int i=c; i>=0; i-=2){

			tmp*=i*(i-1)%modd;
			tmp%=modd;
			tmp*=powe(cnt, modd-2);

			tmp%=modd;
			ans+=tmp;
			ans%=modd;
			cnt++;
		}
		cout<<ans+1<<'\n';
	}
}
