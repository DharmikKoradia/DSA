#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define SORT(x) sort(x.begin(),x.end())
#define SORT(x,n) sort(x,x+n)
#define RSORT(x) sort(x.rbegin(),x.rend())
#define RSORT(x,n) sort(x,x+n)
#define DEBUG(x) cerr<<#x<<" = "<<x;
 
bool comp(const pair<ll,ll> &p1,const pair<ll,ll> &p2){
    return p1.second-p1.first>p2.second-p2.first;
}
void solve()
{
   ll n,ans=0;
   cin>>n;
   vector<pair<ll,ll>> nums(n);
   FOR(i,0,n) cin>>nums[i].first;
   FOR(i,0,n) cin>>nums[i].second;
   
   sort(nums.begin(),nums.end(),comp);
   ll start=0,end=n-1;
   while(start<end){
       ll s1 = nums[start].first+nums[end].first;
       ll s2 = nums[start].second+nums[end].second;
       if(s1<=s2){
           start++;
           end--;
           ans++;
       }
       else end--;
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