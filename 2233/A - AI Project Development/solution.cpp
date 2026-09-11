#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
#define PB push_back
#define F first
#define S second
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
 
#define FOR(i,a,b) for(ll i=(a); i<(b); i++)
#define RFOR(i,a,b) for(ll i=(a); i>=(b); i--)
 
#define YES cout<<"Yes
"
#define NO cout<<"No
"
#define endl '
'
 
void solve()
{
    ll n,x,y,z;
    cin>>n>>x>>y>>z;
    
    ll sum = x+y;
    ll a = (n+sum-1)/sum;
    
    // if(a<=z) cout<<a<<"
";
    
    ll left = max(0ll,n-(z*x));
    
    ll tsum = x+ 10*y;
    ll b = (left+tsum-1)/tsum;
    
    cout<<min(a,z+b)<<"
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--)
    {
	    solve();
    }
}