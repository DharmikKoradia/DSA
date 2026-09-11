#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
 
ll sum(ll n){
    return (n*(n+1))/2;
}
void solve()
{
    ll n,k,q,ans=0;
    cin>>n>>k>>q;
    vector<ll> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    
    ll count=0;
    for(int i=0;i<n;i++){
        if(nums[i]<=q) count++;
        else{
            if(count>=k) ans+=sum(count-k+1);
            count=0;
        }
    }
    if(count>=k) ans+=sum(count-k+1);
    cout<<ans<<"
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
	    solve();
    }
}
 