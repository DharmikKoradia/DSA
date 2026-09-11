#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
 
void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    
    ll max_seen=INT_MIN,progress=0,ans=INT_MIN;
    for(int i=0;i<n;i++){
        if(k>0) k--;
        else break;
        progress+=a[i];
        max_seen=max(max_seen,b[i]);
        ans=max(ans,progress+(max_seen*k));
    }
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
 