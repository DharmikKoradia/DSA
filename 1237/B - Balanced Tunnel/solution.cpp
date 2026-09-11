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
    ll n;
    cin>>n;
    
    vll a(n);
    vll b(n);
    
    unordered_set<int> seen;
    
    FOR(i,0,n) cin>>a[i];
    FOR(i,0,n) cin>>b[i];
    
    ll ans=0;
    ll j = 0;
    
    for(int i=0;i<n;i++){
        // if(seen.find(b[i])!=seen.end()) continue;
        
        if(seen.find(a[i])!=seen.end()) continue;
        
        
        while(j<n && a[i]!=b[j]){
            ans++;
            seen.insert(b[j]);
            j++;
        }
        j++;
        seen.insert(a[i]);
        
        // cout<<i<<" "<<j<<"
";
    }
    
    cout<<"
"<<ans<<"
";
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--)
    {
	    solve();
    }
}