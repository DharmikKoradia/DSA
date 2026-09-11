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
   ll n,k;
   cin>>n>>k;
   V(nums,k);
   FOR(i,0,k) cin>>nums[i];
   SORT(nums);
   
   V(diff,0);
   FOR(i,1,k) diff.push_back(nums[i]-nums[i-1]-1);
   diff.push_back(n-nums[k-1]+nums[0]-1);
   
   RSORT(diff);
   ll days=0,safe=0;
   for(auto val: diff) {
       ll gap = val-2*days;
       if(gap>0){
           safe++;
           
           safe+=max(0ll,gap-2);
           days+=2;
       }
   }
   
   cout<<n-safe<<"
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