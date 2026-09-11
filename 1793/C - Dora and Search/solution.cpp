#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define DEBUG(x) cerr<<#x<<" = "<<x;
 
void solve()
{
    ll n;
    cin>>n;
    vector<ll> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    ll l=0,r=n-1,start=1,end=n;
    
    while(l<r){
        if(nums[l]==start){
            l++;
            start++;
        }
        else if(nums[l]==end){
            l++;
            end--;
        }
        else if(nums[r]==start){
            start++;
            r--;
        }
        else if(nums[r]==end){
            r--;
            end--;
        }
        else{
            cout<<l+1<<" "<<r+1<<"
";
            return;
        }
    }
    cout<<"-1
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