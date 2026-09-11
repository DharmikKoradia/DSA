#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define SORT(x) sort(x.begin(),x.end())
#define RSORT(x) sort(x.rbegin(),x.rend())
#define DEBUG(x) cerr<<#x<<" = "<<x;
#define V(x,n) vector<ll> x(n,0);
 
// const int MOD = 1e9+7;
void solve()
{
    ll n,m,ans=0;
    cin>>n>>m;
    V(nums,n);
    V(freq,m);
    FOR(i,0,n) {
        cin>>nums[i];
        freq[nums[i]%m]++;
    }
    
    for(int i=0;i<=m/2;i++){
        if(i==0){
            if(freq[i]==0) continue;
            ans+=1;
            continue;
        }
        ll x,y=0;
        x = freq[i];
        if(m-i>=0) y = freq[m-i];
        
        if(x==0 && y==0) continue;
        
        ll diff =abs(freq[i]-freq[m-i]);
        // cout<<i<<" "<<diff<<" "<<ans<<"
";
        ans+=max(1ll,diff);
        // cout<<ans<<"
";
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