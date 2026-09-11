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
 
#define DEBUG(x) cerr<<x<<"
";
 
void solve()
{
    ll n;
    cin>>n;
    vector<ll> par(n+1);
    vector<ll> val(n+1);
 
    for(ll i=2;i<n+1;i++) cin>>par[i];
    
    string s;
    cin>>s;
    
    for(ll i = 1;i<n+1;i++){
        if(s[i-1]=='W') val[i] = 1;    
        else  val[i] = -1;    
    }
    
    for(ll i=n;i>1;i--){
        ll curr = par[i];
        val[curr] += val[i];
    }
    
    ll ans=0;
    for(ll i=1;i<n+1;i++){
        if(val[i]==0) ans++;
    }
    cout<<ans<<endl;
    
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