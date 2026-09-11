#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define DEBUG(x) cerr<<#x<<" = "<<x;
 
void solve()
{
   ll n,k;
   map<ll,bool> mpp;
   
   cin>>n>>k;
   
   bool possible=false;
   for(int i=0;i<n;i++){
       ll x;
       cin>>x;
       if(mpp[k+x] || mpp[x-k]) possible=true;
       mpp[x]=true;
   }
   
   possible? cout<<"Yes
":cout<<"No
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