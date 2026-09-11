#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define DEBUG(x) cerr<<#x<<" = "<<x;
 
vector<ll> findMax3(vector<ll> &temp){
    vector<pair<ll,ll>> copy (temp.size());
    
    for(int i=0;i<temp.size();i++){
        copy[i].first = temp[i];
        copy[i].second = i;
    }
    
    sort(copy.rbegin(),copy.rend());
    
    vector<ll> ans(3);
    for(int i=0;i<3;i++) ans[i]=copy[i].second;
    return ans;
}
void solve()
{
   ll n,ans=0;
   cin>>n;
   
   vector<ll> a(n),b(n),c(n);
   
   for(int i=0;i<n;i++) cin>>a[i];
   for(int i=0;i<n;i++) cin>>b[i];
   for(int i=0;i<n;i++) cin>>c[i];
   
   vector<ll> maxA = findMax3(a); 
   vector<ll> maxB = findMax3(b); 
   vector<ll> maxC = findMax3(c);
   
   for(int x: maxA){
       for(int y: maxB){
           for(int z: maxC){
               if(x==y || y==z || x==z) continue;
               
               ans = max(a[x]+b[y]+c[z],ans);
           }
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