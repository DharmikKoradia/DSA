#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define DEBUG(x) cerr<<#x<<" = "<<x;
#define INPUT(x,n) for(size_t i=0;i<n;i++) cin>>x[i];
 
ll MOD=1e9+7;
// ll upper_bound(vector<ll> nums,ll tar){
//     ll low=0,high=nums.size()-1;
//     while(low<=high){
//         ll mid=low+((high-low)/2);
        
//         if(nums[mid]<=tar) low=mid+1;
//         else high=mid-1;
//     }
//     return low;
// }
 
void solve()
{
   ll n,ans=1;
   cin>>n;
   
   vector<ll> a(n),b(n);
   
   
   INPUT(a,n);
   INPUT(b,n);
   
   sort(a.begin(),a.end());
   sort(b.rbegin(),b.rend());
   
   for(size_t i=0;i<n;i++){
   ll limit=upper_bound(a.begin(),a.end(),b[i])-a.begin();
       ans=(ans*max((n-limit-i),0ll)%MOD);
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