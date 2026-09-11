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
    vector<ll> a(n),nums(n),ans(2,0);
    for(int i=0;i<n;i++) cin>>a[i];   
    for(int i=0;i<n;i++) cin>>nums[i];   
    
    bool found=false;
    int l=0,r=0;
    for(int i=0;i<n;i++){
        if(nums[i]!=a[i]){
            if(!found){
                l=i;
                found=true;
            }
            r=i;
        }
    }
    while(l>0 && nums[l-1]<=nums[l]) l--;
    while(r<n-1 && nums[r]<=nums[r+1]) r++;
    
    cout<<l+1<<" "<<r+1<<"
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
 