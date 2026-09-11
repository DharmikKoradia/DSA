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
   ll n;
   cin>>n;
   V(nums,n);
   FOR(i,0,n) cin>>nums[i];
   
   unordered_map<ll,ll> count;
   FOR(i,0,n){
       ll val = nums[i];
       while(val%2==0){
           count[2]++;
           val/=2;
       }
       for(int i=3;i*i<=val;i+=2){
           while(val%i==0){
               count[i]++;
               val/=i;
           }
       }
       if(val>2) count[val]++;
   }
   
   for(auto &it: count){
       if(it.second%n!=0){
           cout<<"No
";
           return;
       }
   }
   cout<<"Yes
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