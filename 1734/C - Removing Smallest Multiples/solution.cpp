#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define SORT(x) sort(x.begin(),x.end())
#define SORT(x,n) sort(x,x+n)
#define RSORT(x) sort(x.rbegin(),x.rend())
#define RSORT(x,n) sort(x,x+n)
#define DEBUG(x) cerr<<#x<<" = "<<x;
 
void solve()
{
    ll n,ans=0;
    cin>>n;
    string s;
    cin>>s;
    
    vector<bool> useable(n,false);
    FOR(i,0,n){
        ll j=i;
        ll val = i+1;
        while(j<n && (s[j]=='0' || useable[j])){
            if(s[j]!='1') ans+=val;
            s[j]='1';
            useable[j]=true;
            j+=val;
            
        }
        // cout<<i<<":"<<ans<<" ";
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