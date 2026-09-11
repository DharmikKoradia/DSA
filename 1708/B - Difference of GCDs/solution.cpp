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
    ll n,l,r;
    
    cin>>n>>l>>r;
    vector<ll> ans(n);
    
    for(ll i=n-1;i>=0;i--){
        ll curr = i+1;
        ll temp = r%curr;
        ll value = r-temp;
        if(value<l){
            cout<<"No
";
            return;
        }
        ans[i] = value;
    }
    
    cout<<"Yes
";
    for(auto num:ans) cout<<num<<" ";
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