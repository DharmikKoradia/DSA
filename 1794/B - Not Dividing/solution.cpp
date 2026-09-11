#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<ll> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
 
void solve()
{
    ll n;
    cin>>n;
    vi nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    if(nums[0]==1) nums[0]++;
    for(int i=1;i<n;i++){
        if(nums[i]==1) nums[i]++;
        if(nums[i]%nums[i-1]==0) nums[i]++;
    }
    for(ll val: nums) cout<<val<<" ";
    cout<<"
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
 