#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve(){
    ll n;
    cin>>n;
    
    vector<ll> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    
    
    int curr = 0;
    for(int i = n-1;i>=0;i--){
        int dist = nums[i]-curr;
        curr = curr + 2*dist;
        
        // cout<<curr<<" ";
    }
    
    cout<<(curr>>1)<<"
";
}
int main() {
    int t;
    cin>>t;
    while(t--) solve();
}