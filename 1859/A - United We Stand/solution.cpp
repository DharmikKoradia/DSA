#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<int> nums(n),b,c;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    int i=0;
    while(i<n){
        if(i==0 || nums[i-1]==nums[i]) b.push_back(nums[i++]);
        else break;
    }
    for(i;i<n;i++) c.push_back(nums[i]);
    if(c.size()==0) cout<<"-1
";
    else{
        cout<<b.size()<<" "<<c.size()<<"
";
        for(int val: b) cout<<val<<" ";
        cout<<"
";
        for(int val: c) cout<<val<<" ";
        cout<<"
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