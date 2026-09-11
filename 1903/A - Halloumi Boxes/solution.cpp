#include <iostream>
#include <vector>
 
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    if(k>1) cout<<"Yes
";
    else{
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                cout<<"No
";
                return;
            }
        }
        cout<<"Yes
";
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}