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
    ll n,ans=LLONG_MIN;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    ll sum=0;
    ans=nums[0];
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(i!=0 && abs(nums[i-1])%2==abs(nums[i])%2){
            sum=nums[i];
        }
        ans=max(ans,sum);
        if(sum<0){
            sum=0;
        }
        // cout<<ans<<" ";
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
 