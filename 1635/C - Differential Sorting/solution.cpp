#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define SORT(x) sort(x.begin(),x.end())
#define RSORT(x) sort(x.rbegin(),x.rend())
#define DEBUG(x) cerr<<#x<<" = "<<x;
#define V(x,n) vector<ll> x(n);
 
 
void solve()
{
    ll n;
    cin>>n;
    V(nums,n);
    
    FOR(i,0,n) cin>>nums[i];
    
    if(nums[n-2]>nums[n-1]){
        cout<<"-1
";
        return;
    }
    else if(nums[n-1]<0){
        FOR(i,0,n-2){
            if(nums[i]>nums[i+1]){
                cout<<"-1
";
                return;
            }
        }
        // cout<<"Hello
";
        cout<<"0
";
        return;
    }
    cout<<n-2<<"
";
    FOR(i,0,n-2) cout<<i+1<<" "<<n-1<<" "<<n<<"
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