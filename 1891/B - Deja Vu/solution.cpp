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
    ll n,q;
    cin>>n>>q;
    vector<ll> nums(n),x(q);
    for(ll i=0;i<n;i++) cin>>nums[i];
    for(ll i=0;i<q;i++) cin>>x[i];
    
    ll prev = 31;
    for(ll i=0;i<q;i++){
        if(x[i]>=prev) continue;
        ll val=(1<<x[i]);
        for(ll j=0;j<n;j++){
            if(nums[j]%val==0) nums[j]+=(val/2);
        }
        prev=x[i];
    }
    
    for(auto val: nums) cout<<val<<" ";
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
 