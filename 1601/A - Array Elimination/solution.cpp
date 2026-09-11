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
    ll n;
    cin>>n;
    
    vll nums(n);
    vll freq(31,0);
    
    FOR(i,0,n) cin>>nums[i];
    
    
    FOR(i,0,31){
        ll val = (1<<i);
        FOR(j,0,n){
            if((nums[j]&val)) freq[i]++;
        }
    }
    
    FOR(i,1,n+1){
        bool poss = true;
        FOR(j,0,31){
            if(freq[j]%i!=0){
                poss=false;
                break;
            }
        }
        if(poss) cout<<i<<" ";
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