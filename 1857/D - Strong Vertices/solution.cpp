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
   vector<pair<ll,ll>> nums(n);
   vector<pair<ll,ll>> diff(n);
   
   FOR(i,0,n) cin>>nums[i].first;
   FOR(i,0,n){
       cin>>nums[i].second;
       diff[i].first = nums[i].first - nums[i].second;
       diff[i].second = i+1;
    }
    
    
    sort(diff.begin(),diff.end(),[](const auto &a,const auto &b)->bool{
        return a.first>b.first;
    });
    
    
    ll ans = 1;
    vector<ll> edges = {diff[0].second};
    FOR(i,1,n){
        if(diff[i].first ==diff[i-1].first) edges.push_back(diff[i].second);
        else break;
    }
    SORT(edges);
    
    cout<<edges.size()<<"
";
    for(auto &it: edges) cout<<it<<" ";
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