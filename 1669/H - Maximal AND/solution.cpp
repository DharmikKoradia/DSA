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
#define DEBUG(x) cerr<<#x<<": "<<x<<"
";
 
void solve()
{
    ll n,k;
    cin>>n>>k;
    
    vector<vector<ll>> loc(31);
    vll nums(n);
    
    FOR(i,0,n) cin>>nums[i];
    ll last = 30;
    
    FOR(i,0,31){
        ll val = (1<<i);
        FOR(j,0,n){
            if((nums[j] & val)==0) loc[i].push_back(j);
            else last = i;
        }
    }
    
    
    for(ll i=30;i>=0;i--){
        ll left = loc[i].size();
        ll val = (1<<i);
        if(left<=k){
            k-=left;
            for(auto &it: loc[i]) nums[it]|=val;
        }
    }
    
    ll ans = nums[0];
    FOR(i,1,n) ans&=nums[i];
    
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