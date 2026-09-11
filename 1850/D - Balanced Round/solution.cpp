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
    ll n,k,ans=0,count=1;
    cin>>n>>k;
    vector<ll> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    sort(nums.begin(),nums.end());
    for(int i=1;i<n;i++){
        if(nums[i]-nums[i-1]<=k) count++;
        else count=1;
        ans=max(ans,count);
    }
    ans=max(ans,count);
    cout<<n-ans<<"
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
 