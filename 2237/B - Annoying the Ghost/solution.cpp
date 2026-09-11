#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
#define PB push_back
#define F first
#define S second
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
 
#define FOR(i,a,b) for(ll i=(a); i<(b); i++)
#define RFOR(i,a,b) for(ll i=(a); i>=(b); i--)
 
#define YES cout<<"Yes
"
#define NO cout<<"No
"
#define endl '
'
 
void solve()
{
    ll n,ans=0;
    cin>>n;
    vll a(n);
    vll b(n);
    
    FOR(i,0,n) cin>>a[i];
    
    FOR(i,0,n) cin>>b[i];
    
 
    FOR(i,0,n){
        if(a[i]>b[i]){
            bool found = false;
            ll j=i+1;
            for(j;j<n;j++){
                if(a[j]<=b[i]){
                    found = true;
                    rotate(a.begin()+i, a.begin()+j, a.begin()+j+1);
                    break;
                }
            }
            // cout<<j<<" "<<i<<"
";
            ans+=(j-i);
            // FOR(i,0,n) cout<<a[i]<<" ";
            // cout<<"
";
            if(!found){
                cout<<"-1
";
                return;
            }
        }
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