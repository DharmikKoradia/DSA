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
    
    vector<string> nums(n);
    vector<ll> c(n);
    int ans = 0;
    FOR(i,0,n){
        cin>>nums[i];
        int size = nums[i].size();
        ans+=size;
        ll count = 0;
        
        for(int j = size-1;j>=0;j--){
            if(nums[i][j]=='0') count++;
            else break;
        }
        
        c[i] = count;
    }
    
    sort(RALL(c));
    
    for(int i=0;i<n;i+=2) ans-=c[i];
    
    // cout<<ans<<" ";
    (ans>m)? cout<<"Sasha
": cout<<"Anna
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