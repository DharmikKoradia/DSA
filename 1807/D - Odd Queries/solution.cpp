#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<ll> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
 
void solve()
{
    ll n,q,sum=0;
    cin>>n>>q;
    vi nums(n),prefix(n+1);
    for(int i=0;i<n;i++){
        prefix[i]=sum;
        cin>>nums[i];
        sum+=nums[i];
    }
    prefix[n]=sum;
    while(q--){
        ll l,r,k;
        cin>>l>>r>>k;
        ll temp=sum-(prefix[r]-prefix[l-1])+k*(l-r+1);
        temp=sum-(prefix[r]-prefix[l-1])+k*(r-l+1);
        if(temp%2) cout<<"Yes
";
        else cout<<"No
";
    }
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
 