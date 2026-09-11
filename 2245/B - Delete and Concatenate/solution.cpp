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
    ll n,c;
    cin>>n>>c;
    
    vll nums(n);
    
    FOR(i,0,n) cin>>nums[i];
    
    sort(ALL(nums));
    
    ll ans=0;
    ll l=0,r=n-1;
    while(nums[l]<=c && l<r){
        ans+=(nums[r]-c);
        r--;
        l++;
    }
    
    for(int i=l;i<=r;i++) ans+=nums[i]-c;
    
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