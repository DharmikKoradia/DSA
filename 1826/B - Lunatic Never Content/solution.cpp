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
    ll n;
    cin>>n;
    vector<ll> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];   
    
    ll ans=abs(nums[0]-nums[n-1]);
    for(int i=1;i<n/2;i++){
        ans=__gcd(ans,abs(nums[i]-nums[n-1-i]));
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