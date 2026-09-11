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
    ll n,k,ans=0;
    cin>>n>>k;
    vector<ll> nums(n*k);
    for(int i=0;i<n*k;i++) cin>>nums[i];
    sort(nums.begin(),nums.end());
    ll half=(n)/2,temp=(n*k)-1;
    for(int i=0;i<k;i++){
        temp-=half;
        ans+=nums[temp];
        // cout<<temp<<" ";
        temp--;
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
 