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
#define DEBUG(x) cerr<<#x<<" = "<<x<<"
";
#define V(x,n) vector<ll> x(n);
 
bool comp(const pair<ll,ll> &p1,const pair<ll,ll> &p2){
    return p1.first<p2.first;
}
void solve()
{
   ll n,extra,limit;
   cin>>n>>extra>>limit;
   
   V(nums,n);
   
   FOR(i,0,n) cin>>nums[i];
   
   SORT(nums);
   
   priority_queue<ll,vector<ll>,greater<ll>> gaps;
   FOR(i,1,n){
       ll diff = nums[i]-nums[i-1];
       if(diff-1>=limit) gaps.push(diff-1); 
   }
   
   while(!gaps.empty() && extra>0){
       ll gap = gaps.top();
       ll req = gap/limit;
       if(extra>=req) {
           extra-=req;
           gaps.pop();
       }
       else break;
   }
   
   cout<<gaps.size()+1<<"
";
   
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--)
    {
	    solve();
    }
}