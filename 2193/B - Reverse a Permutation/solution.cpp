#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define DEBUG(x) cerr<<#x<<" = "<<x;
 
void solve()
{
    ll n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    
    ll maxi=0,start=-1,end=-1;
    for(int i=0;i<n;i++){
        if(nums[i]!=(n-i) && start==-1) start=i;
        if(start!=-1){
            if(maxi<nums[i]){
                end=i;
                maxi=nums[i];
            }
        }
    }
    
    if(start!=-1){
        reverse(nums.begin()+start,nums.begin()+end+1);
    }
    
    for(auto val: nums) cout<<val<<" ";
    cout<<"
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--)
    {
	    solve();
    }
}