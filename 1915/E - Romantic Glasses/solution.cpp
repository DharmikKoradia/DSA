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
   ll n, sum = 0;
   cin>>n;
   V(nums,n);
   FOR(i,0,n) cin>>nums[i];
   
   set<ll> seen;
   seen.insert(0);
   for(int i=0;i<n;i++){
       if(i%2) sum-=nums[i];
       else sum+= nums[i];
       
       if(seen.find(sum)!=seen.end()){
           cout<<"Yes
";
           return;
       }
       seen.insert(sum);
   }
   cout<<"No
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