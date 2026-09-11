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
 
ll moves(string &s,ll l,ll h,char del){
    ll ans=0;
    while(l<h){
        if(s[h]==s[l]){
            l++;
            h--;
        }
        else{
            if(s[l]==del){
                l++;
                ans++;
            }
            else if(s[h]==del){
                h--;
                ans++;
            }
            else{
                return INT_MAX;
            }
        }
    }
    return ans;
}
 
void solve()
{
   ll n;
   string s;
   cin>>n>>s;
   
   ll l=0,h=n-1;
   while(l<h){
       if(s[l]!=s[h]) break;
       l++;
       h--;
   }
   
   ll ans = min(moves(s,l,h,s[l]),moves(s,l,h,s[h]));
   
   ans==INT_MAX? cout<<-1<<"
": cout<<ans<<"
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