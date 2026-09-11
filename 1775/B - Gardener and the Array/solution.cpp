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
    vector<vector<ll>> grid(n);
    unordered_map<ll,ll> mpp;
    
    for(int i=0;i<n;i++){
        ll m;
        cin>>m;
        while(m--){
            ll x;
            cin>>x;
            grid[i].push_back(x);
            mpp[x]++;
        }
    }
    
    for(auto &it: grid){
        bool poss=true;
        for(auto val: it){
            if(mpp[val]==1){
                poss=false;
                break;
            }
        }
        if(poss){
            cout<<"Yes
";
            return;
        }
    }
    cout<<"No
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