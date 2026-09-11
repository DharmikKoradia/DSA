#include <iostream>
#include <vector>
 
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int val:nums) cout<<(n-val)+1<<" ";
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