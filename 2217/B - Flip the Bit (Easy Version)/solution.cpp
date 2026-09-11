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
   
  V(nums,n);
  FOR(i,0,n) cin>>nums[i];
  ll loc;
  cin>>loc;
   
  ll c1=0,c2=0;
  ll val = nums[loc-1];
  for(int i=loc-2;i>=0;i--){
      if((nums[i]^val)==1){
          c1++;
          val=!val;
      }
  }
  val = nums[loc-1];
  for(int i=loc;i<n;i++){
      if((nums[i]^val)==1){
          c2++;
          val=!val;
      }
   }
   
    c1+=(c1%2);
    c2+=(c2%2);
    
    cout<<max(c1,c2)<<"
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