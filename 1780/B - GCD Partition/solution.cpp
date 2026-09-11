#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define DEBUG(x) cerr<<#x<<" = "<<x;
 
void solve()
{
   ll n,total,ans=0;
   cin>>n;
   vector<ll> nums(n),sum(n,0);
   
   for(int i=0;i<n;i++){
       cin>>nums[i];
       if(i==0)sum[i]=nums[i];
       else sum[i]=sum[i-1]+nums[i];
   }
   
   total=sum[n-1];
   
   for(int i=0;i<n-1;i++){
       ans = max(ans,__gcd(sum[i],total-sum[i])); 
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