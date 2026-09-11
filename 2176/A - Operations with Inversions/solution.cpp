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
   ll n,ans=0;
   cin>>n;
   vector<ll> nums(n);
   for(int i=0;i<n;i++) cin>>nums[i];
   ll max_seen=0;
   for(int i=0;i<n;i++){
       max_seen=max(max_seen,nums[i]);
       if(nums[i]<max_seen) ans++;
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
 