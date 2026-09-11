#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
 
void solve()
{
   ll n,k,ans=LLONG_MAX,sum;
   cin>>n>>k;
   vector<ll> nums(n),a(k+1),b(k+1);
   a[0]=b[0]=0;
   
   for(int i=0;i<n;i++) cin>>nums[i];
   
   sum=accumulate(nums.begin(),nums.end(),0ll);
   sort(nums.begin(),nums.end());
   ll i=0,j=n-1;
   for(int x=1;x<=k;x++){
       a[x]=a[x-1]+nums[i]+nums[i+1];
       b[x]=b[x-1]+nums[j--];
       i+=2;
   }
   for(int i=0;i<=k;i++) ans=min(ans,a[i]+b[k-i]);
   cout<<sum-ans<<"
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
 