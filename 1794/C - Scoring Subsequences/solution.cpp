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
   
   ll l=0,r=0,i=0;
   while(r<n){
       
       while(r-l+1>nums[l]) l++;
       cout<<r-l+1<<" ";
       if(nums[r]>=r-l+1) r++;
       
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