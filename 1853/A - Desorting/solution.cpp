#include <iostream>
#include <vector>
#include <climits>
 
using namespace std;
void solve(){
    int n,ans=INT_MAX;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    for(int i=1;i<n;i++){
        ans=min(ans,((nums[i]-nums[i-1]+2)/2));
    }
    cout<<max(ans,0)<<"
";
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
 
    return 0;
}