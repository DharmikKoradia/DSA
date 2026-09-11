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
#define DEBUG(x) cerr<<#x<<x<<"
";
 
ll LCM(ll a,ll b){
    return (a*b)/__gcd(a,b);
}
void solve()
{
    ll n,ans=0,temp=INT_MAX;
    cin>>n;
    
    if(n%2==0){
        cout<<n/2<<" "<<n/2<<"
";
        return;
    }
    
    for(ll i = 2;i*i<=n;i++){
        if(n%i==0){
            cout<<n/i<<" "<<n-(n/i)<<"
";
            return;
        }
    }
    cout<<1<<" "<<n-1<<"
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