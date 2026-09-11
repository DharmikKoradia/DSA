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
#define DEBUG(x) cerr<<#x<<x<<"
";
 
void solve()
{
    ll n,m;
    cin>>n>>m;
    
    vll nums(n);
    vll cost(m);
    
    FOR(i,0,n) cin>>nums[i];
    FOR(i,0,m) cin>>cost[i];
    
    sort(RALL(nums));
    
    ll ans = 0;
    ll j=0;
    FOR(i,0,n){
        if(j<nums[i]-1){
            ans+=cost[j++];
        }
        else ans+=cost[nums[i]-1];
    }
    
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