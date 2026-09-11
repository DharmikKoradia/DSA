#include <iostream>
#include <vector>
 
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<int> nums(n),ans;
    for(int i=0;i<n;i++){
        cin>>nums[i];
        if(i==0 || nums[i]>=nums[i-1]){
            ans.push_back(nums[i]);
        }
        else{
            ans.push_back(nums[i]);
            ans.push_back(nums[i]);
        }
    }
    cout<<ans.size()<<"
";
    for(auto it: ans) cout<<it<<" ";
    cout<<"
";
}
 
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
 
    return 0;
}