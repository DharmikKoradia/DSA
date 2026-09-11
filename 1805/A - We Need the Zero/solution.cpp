#include <iostream>
#include <vector>
using namespace std;
 
void solve(){
    int ans=0,n,temp=0;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) {
        cin>>nums[i];
        ans^=nums[i];
    }
    if(n%2) cout<<ans<<"
";
    else ans==0? cout<<"0
":cout<<"-1
";
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}