#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
#define V(x,n) vector<ll> x(n) 
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define SORT(x) sort(x.begin(),x.end())
#define RSORT(x) sort(x.rbegin(),x.rend())
#define DEBUG(x) cerr<<#x<<" = "<<x;
 
void solve()
{
   ll n,ans=0;
   cin>>n;
   
   V(nums,n);
   FOR(i,0,n) cin>>nums[i];
   
   map<ll,ll> mpp;
   FOR(i,0,n) mpp[nums[i]]++;
   
   for(auto it: mpp) {
       ans+=max(mpp[it.first]-mpp[it.first-1],0ll);
    //   cout<<it.second<<" "<<mpp[it.first-1]<<"
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