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
    ll n,d,ans=0;
    cin>>n>>d;
    vector<ll> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    sort(nums.begin(),nums.end());
    ll l=0,r=n-1;
    while(l<=r){
        ll maxi=nums[r];
        ll req=d/maxi;
        l+=req;
        if(l<=r) ans++;
        // cout<<l<<" "<<r<<"
";
        r--;
    }
    
    cout<<ans<<"
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
 