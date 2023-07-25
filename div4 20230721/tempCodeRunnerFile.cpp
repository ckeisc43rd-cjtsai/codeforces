#include <iostream>
#include <queue>
#include <algorithm>
#define pii pair<int, int>
#define int unsigned long long
#define xdd __int128_t
#define piii pair<int, pair<int, int>>
#include <vector>
//#include <cmath>
using namespace std;
xdd sqrt(xdd x) {
    if (x == 0) { return 0; }
    int r = x;
    while (r >x / r){
        r = x / r + (r - x/ r) / 2;
    }
    return r;
    }
std::ostream& operator<<( std::ostream& dest, __int128_t value )
{
    std::ostream::sentry s( dest );
    if ( s ) {
        __uint128_t tmp = value < 0 ? -value : value;
        char buffer[ 128 ];
        char* d = std::end( buffer );
        do
        {
            -- d;
            *d = "0123456789"[ tmp % 10 ];
            tmp /= 10;
        } while ( tmp != 0 );
        if ( value < 0 ) {
            -- d;
            *d = '-';
        }
        int len = std::end( buffer ) - d;
        if ( dest.rdbuf()->sputn( d, len ) != len ) {
            dest.setstate( std::ios_base::badbit );
        }
    }
    return dest;
}
signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin>>t;
    while(t--){
        int n, c;cin>>n>>c;
        int sum=0;
        for(int i=0; i<n; i++){
            int s;cin>>s;
            c-=s*s;
            sum+=s;
        }//sum*=4;
        xdd tmp=sum*sum+n*c;
        tmp=sqrt(tmp);
        tmp*=4;
        tmp-=4*sum;
        tmp/=8*n;
        cout<<'\n'<<tmp<<'\n';
    }
}