#include <iostream>
#include<vector>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    if(nums[0]==1)cout<<"Yes
";
    else cout<<"No
";
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}