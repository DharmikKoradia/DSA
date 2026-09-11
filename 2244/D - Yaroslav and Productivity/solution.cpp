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
#define DEBUG(x) cerr<<#x<<":"<<x<<"
";
 
void solve()
{
    ll n,m;
    cin>>n>>m;
    
    vll a(n),b(m),pre(n+1);
    
    pre[0] = 0;
    FOR(i,0,n){
        cin>>a[i];
        pre[i+1] = pre[i]+a[i];
    }
    FOR(i,0,m) cin>>b[i];
    
    sort(RALL(b));
 
    ll ans = pre[n] - pre[b[0]];  
    ll r = b[0];
    for (int i = 1; i < m; i++) {
        ans += abs(pre[r] - pre[b[i]]);
        r = b[i];
    }
    
    ans += abs(pre[r] - pre[0]);   
    cout<<ans<<"
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