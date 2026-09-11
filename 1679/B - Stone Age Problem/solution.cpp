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
 
void solve()
{
   ll n,q,sum=0;
   cin>>n>>q;
   vector<pair<ll,ll>> nums(n);
   FOR(i,0,n){
       cin>>nums[i].first;
       sum+=nums[i].first;
       nums[i].second=-1;
   }
   ll globalUpdate=INT_MIN,globalValue=-1;
   FOR(i,0,q){
       int op=1;
       cin>>op;
       if(op==1){
           int loc,val;
           cin>>loc>>val;
           loc-=1;
           if(globalUpdate<nums[loc].second){
               sum+=(val-nums[loc].first);
           }
           else{
               sum+=(val-globalValue);
           }
           nums[loc].first=val;
           nums[loc].second=i;
       }
       else{
           cin>>globalValue;
           sum=globalValue*n;
           globalUpdate=i;
       }
       cout<<sum<<"
";
   }
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