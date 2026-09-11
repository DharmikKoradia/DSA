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
#define DEBUG(x) cerr<<#x<<":"<<x<<"
";
 
void solve()
{
    ll n,m;
    cin>>n>>m;
    
    vll a(n-1),b(n);
    ll least = INT_MAX;
    FOR(i,0,n-1){
        cin>>a[i];
        // least = min(least,a[i]);
    }
    FOR(i,0,n) cin>>b[i];
    
    a.push_back(1);
    sort(ALL(a));
    sort(ALL(b));
 
    ll j=0,i=0;
    
    while(i<n && j<n){
        j = upper_bound(b.begin()+j,b.end(),a[i])-b.begin();
        while(i<n && j<n && a[i]<b[j]){
            i++;
            j++;
        }
    }
    
    
    cout<<n-i<<"
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