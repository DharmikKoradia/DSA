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
    ll n,q;
    cin>>n>>q;
    
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    
    a[n-1]=max(a[n-1],b[n-1]);
    for(int i=n-2;i>=0;i--){
        a[i]=max({a[i],a[i+1],b[i]});
    }
    
    vector<ll> prefix(n+1);
    prefix[0]=0;
    for(int i=1;i<=n;i++) prefix[i]=prefix[i-1]+a[i-1];
    
    
    while(q--){
        ll l,r;
        cin>>l>>r;
        cout<<prefix[r]-prefix[l-1]<<" ";
    }
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