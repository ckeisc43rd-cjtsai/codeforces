#include <iostream>
#include <vector>
using namespace std;

signed main(){
    int t;cin>>t;
    while(t--){
        int a, b, c;cin>>a>>b>>c;
        if(a+b>=10||a+c>=10||b+c>=10) cout<<"YES\n";
        else cout<<"NO\n";
    }
}