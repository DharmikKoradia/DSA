#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<int>nums(n);
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        cin>>nums[i];
        mpp[nums[i]]++;
    } 
    if(mpp.size()==1) cout<<"Yes
";
    else if(mpp.size()==2 && (mpp[nums[0]]==n/2 || mpp[nums[0]]==(n+1)/2)) cout<<"Yes
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