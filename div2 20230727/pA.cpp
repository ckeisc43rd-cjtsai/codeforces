#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
#define pii pair<int, int>
#define ff first
#define ss second
#define int long long
#define MAXN 500
using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        cout<<min(2*a-1, 2*(b+c)+1)<<'\n';
    }
}