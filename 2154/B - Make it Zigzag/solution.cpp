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
    ll n,ans=0;
    cin>>n;
    vector<int> nums(n),prefix_max(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    prefix_max[0]=nums[0];
    for(int i=1;i<n;i++){
        prefix_max[i]=max(prefix_max[i-1],nums[i]);
    }
    for(int i=1;i<n;i+=2){
        if(i!=n-1){
            ans+=max(0,nums[i+1]-prefix_max[i]+1);
            nums[i+1]-=max(0,nums[i+1]-prefix_max[i]+1);
        }
    }
    ans+=max(0,nums[0]-prefix_max[1]+1);
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
 