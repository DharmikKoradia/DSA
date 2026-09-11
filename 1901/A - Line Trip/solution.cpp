#include <iostream>
#include <vector>
 
using namespace std;
void solve(){
    int ans;
    int x,n;
    cin>>n>>x;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    ans=2*(x-nums[n-1]);
    int start=0;
    for(int i=0;i<n;i++){
        ans=max(ans,nums[i]-start);
        start=nums[i];
    }
    cout<<ans<<"
";
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}