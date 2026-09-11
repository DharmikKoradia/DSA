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
   ll n,limit;
   cin>>n;
   limit=n*(n-1);
   unordered_map<ll,ll> mpp;
   
   bool poss=false;
   FOR(i,0,n){
       FOR(j,0,n){
           ll x;
           cin>>x;
           mpp[x]++;
           if(mpp[x]>limit){
               poss=true;
           }
       }
   }
   poss?cout<<"No
":cout<<"Yes
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