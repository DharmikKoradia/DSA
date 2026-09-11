#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
 
void solve()
{
    ll n,x,ans=0;
    cin>>n>>x;
    vector<pair<ll,ll>> nums(n);
    for(int i=0;i<n;i++){
        ll temp;
        cin>>temp;
        nums[i].first=temp-x;
        nums[i].second=temp+x;
    }
    
    ll l=nums[0].first;
    ll r=nums[0].second;
    for(int i=1;i<n;i++){
        if(nums[i].second<l || nums[i].first>r){
            l=nums[i].first;
            r=nums[i].second;
            ans++;
        }
        else{
            l=max(l,nums[i].first);
            r=min(r,nums[i].second);
        }
    }
    cout<<ans<<"
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
	    solve();
    }
}
 