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
    ll l,r,ans=1;
    ll n,m,k;
    cin>>n>>k>>m;
    
    
    l = r = k;
    
    FOR(i,0,m){
        ll left,right;
        cin>>left>>right;
        
        // cout<<left<<" "<<l<<"
";
        // cout<<right<<" "<<r<<"
";
        // cout<<"-------
";
        
        if(left>r || right<l) continue;
        
        if(left<=l && r<=right){
            l = left;
            r = right;
        }
        else if(left<l){
            l = left;
        }
        else if(r<right) r = right;
        ans = r - l + 1;
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