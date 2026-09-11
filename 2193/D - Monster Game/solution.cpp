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
    ll n,q,ans=0;
    cin>>n;
    
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    
    sort(a.begin(),a.end());
    for(int i=1;i<n;i++) b[i]+=b[i-1];
    
    unordered_map<ll,ll> diff;
    for(int i=0;i<n;i++){
        if(diff.find(a[i])==diff.end()) diff[a[i]]=n-i;
    }
    
    for(auto it: diff){
        ll x=it.first;
        ll strike = it.second;
        
        // cout<<x<<" "<<strike<<"
"; 
        ll temp = lower_bound(b.begin(),b.end(),strike)-b.begin();
        
        if(b[temp]==strike) temp++;
        ans=max(ans,(temp)*x);
    }
    cout<<ans<<"
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