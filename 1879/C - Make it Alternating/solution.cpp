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
 
 
ll MOD = 998244353;
 
void solve()
{
   string s;
   cin>>s;
   
   ll n = s.size();
   vector<ll> dp(n+1,-1);
   
   dp[0]=1;
   FOR(i,0,n){
       dp[i+1] = (dp[i]*(i+1))%MOD;
   }
   
   
   ll i=1,count = 0,ans = 1,rem = -1;
   char curr = s[0];
   
   for(char &c:s){
       if(c==curr){
           rem++;
       }
       else{
           ans = (ans*(rem+1))%MOD;
           count+=rem;
           rem=0;
           curr = c;
       }
   }
  count+=rem;
  ans = (ans*(rem+1))%MOD;
  ans = (ans*dp[count])%MOD;
  cout<<count<<" "<<ans<<"
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