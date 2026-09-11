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
    ll n;
    cin>>n;
    
    vector<ll> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    
    sort(nums.begin(),nums.end());
    
    ll ans=nums[0];
    if(n==1){
        cout<<ans<<"
";
        return;
    }
    cout<<max(ans,nums[1]-ans)<<"
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
 