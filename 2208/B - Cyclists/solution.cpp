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
 
bool comp(pair<ll,ll> &a,pair<ll,ll> &b){
    if(b.second>a.second) return false;
    else if(b.second<a.second) return true;
    return a.first<b.first;
}
void solve()
{
   ll n,k,p,m,ans=0;
   cin>>n>>k>>p>>m;
   
   deque <pair<ll,ll>> temp;
   
   FOR(i,0,n){
       ll x;
       cin>>x;
       if(i==p-1) temp.push_back({x,1});
       else temp.push_back({x,0});
   }
   
    while(true){
       sort(temp.begin(),temp.begin()+k,comp);
    //   for(auto it: temp) cout<<it.first<<" "<<it.second<<"
";
       if(temp.front().first>m) break;
       ans+=temp.front().second;
       m-=temp.front().first;
    //   cout<<ans<<" "<<m<<" ";
       pair<ll,ll> a = temp.front();
       temp.pop_front();
       temp.push_back(a);
    //   cout<<"
";
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