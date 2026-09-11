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
 
 
bool check(ll k,vector<pll> nums,ll n) {
    ll L = 0, R = 0;
 
    for (int i = 0; i < n; i++) {
        L = max(nums[i].first, L - k);
        R = min(nums[i].second, R + k);
 
        // cout<<L<<" "<<R<<"
";
        if (L > R)
            return false;
    }
 
    return true;
}
 
void solve()
{
    ll n;
    cin>>n;
    
    vector<pll> nums(n);
    
    ll l=0,r = 0;
    FOR(i,0,n){
        cin>>nums[i].first>>nums[i].second;
        r = max(r,nums[i].second);
    }
    
    while(l<=r){
        ll mid = l + ((r-l)>>1);
        // cout<<mid<<" "<<l<<" "<<r<<"
";
        
        if(check(mid,nums,n)) r = mid-1;
        else l = mid+1;
        
    }
    
    cout<<l<<"
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