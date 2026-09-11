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
 
bool comp(const pair<ll,ll> &p1,const pair<ll,ll> &p2){
    return p1.first<p2.first;
}
void solve()
{
   ll n;
   cin>>n;
   vector<pair<ll,ll>> nums(n);
   FOR(i,0,n){
       cin>>nums[i].first;
       nums[i].second=i+1;
   }
   
   sort(nums.begin(),nums.end(),comp);
   
   ll ans=0;
   FOR(i,0,n){
       FOR(j,i+1,n){
           ll mul = nums[i].first*nums[j].first ;
           ll sum = nums[i].second+nums[j].second;
           if(mul>=2*n) break;
           if(mul==sum) ans++;
       }
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