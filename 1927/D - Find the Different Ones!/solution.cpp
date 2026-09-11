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
   vector<ll> nums(n);
   for(int i=0;i<n;i++) cin>>nums[i];
   
   vector<pair<ll,ll>> range;
   range.push_back({-1,-1});
   ll i=0;
   while(i<n){
       ll start = i,count=0;
       while(i<n && nums[i]==nums[start]){
           count++;
           i++;
       }
       i-=count;
       for(i;i<start+count;i++){
           range.push_back(make_pair(start+1,start+count));
       }
   }
   
   ll q;
   cin>>q;
   while(q--){
       ll l,r;
       cin>>l>>r;
       if(range[l].second<r){
           cout<<l<<" "<<range[l].second+1<<"
";
       }
       else cout<<"-1 -1
";
   }
   cout<<"
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