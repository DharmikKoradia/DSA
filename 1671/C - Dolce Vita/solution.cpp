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
#define V(x,n) vector<ll> x(n);
 
ll isBuyable(ll days,ll ind,ll value,ll bug){
    return ((days*ind)+value<=bug);
}
 
ll binSearch(ll val,ll ind,ll bug){
    ll low = 0, high =INT_MAX;
    while(low<=high){
        ll mid = low + ((high-low)/2);
        
        if(isBuyable(mid-1,ind+1,val,bug)) low = mid + 1;
        else high = mid - 1;
    }
    return max(0ll,high);
}
void solve()
{
   ll n,x;
   cin>>n>>x;
   
   V(price,n);
   FOR(i,0,n) cin>>price[i];
   
   SORT(price);
   FOR(i,1,n) price[i]+=price[i-1];
   ll ans=0;
   FOR(i,0,n){
        ans+=binSearch(price[i],i,x);  
        // cout<<ans<<" ";
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