#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<ll> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(ll i=a;i<b;i++)
 
bool comp(const pair<ll,ll> &p1,const pair<ll,ll> &p2){
    if(p1.second<p2.second) return true;
    else if(p1.second>p2.second) return false;
    else return p1.first>p2.first;
}
void solve()
{
    ll n,k,copy=0,ans=0;
    cin>>n>>k;
    copy=n;
    vector<pair<ll,ll>> nums(n);
    for(ll i=0;i<n;i++) cin>>nums[i].first;
    for(ll i=0;i<n;i++) cin>>nums[i].second;
    
    sort(nums.begin(),nums.end(),comp);
    
    ll i=0;
    copy--;
    ans+=k;
    while(copy>0 && i<n && nums[i].second<k){
        ans+=min(copy,nums[i].first)*nums[i].second;
        copy-=nums[i].first;
        i++;
    }
    ans+=max(copy,(ll)0)*k;
    cout<<ans<<"
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
	    solve();
    }
}
 