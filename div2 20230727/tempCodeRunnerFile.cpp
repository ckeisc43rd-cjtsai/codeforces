#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
#include <set>
#define pii pair<int, int>
#define ff first
#define ss second
#define int long long
#define MAXN 500
#define prime 100663319
using namespace std;

int pow[200007];

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    pow[0]=1;
    for(int i=1; i<200006; i++) pow[i]=(pow[i-1]*2)%prime;
    int t;cin>>t;
    while(t--){
        int n, m;cin>>n>>m;
        string s;cin>>s;
        vector<int> prehash(MAXN);
        vector<int> prezero(MAXN);
        prehash[0]=s[n-1]-'0';
        prezero[0]=(s[n-1]-'0');
        for(int i=2; i<=n; i++){
            int tmp=n-i;
            prehash[i-1]=(prehash[i-2]+(s[tmp]-'0')*pow[i-1])%prime;
            prezero[i-1]=prezero[i-2]+(s[tmp]-'0');
        }//cout<<prehash[n-1]<<' '<<prezero[n-1]<<'\n';
        for(int i=0; i<n; i++) cout<<prehash[i]<<' '<<prezero[i]<<'\n';
        set<int> ans;
        int bla=prehash[n-1];
        for(int i=0; i<m; i++){
            int a, b;cin>>b>>a;
            a=n-a;b=n-b;
            if(a==0)ans.insert((bla-prehash[b]+prime+(pow[prezero[b]]-1))%prime);
            else ans.insert((((bla-prehash[b]+prime)%prime+prehash[a-1])%prime+(pow[a]*(pow[prezero[b]-prezero[a-1]]-1))%prime)%prime);
        }cout<<ans.size()<<'\n';
    }
}