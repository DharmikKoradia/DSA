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
    string s;
    cin>>s;
    
    stack<char> temp;
    
    FOR(i,0,n){
        if(!temp.empty() && temp.top()==s[i]){
            temp.pop();
            continue;
        }
        temp.push(s[i]);
    }
    
    temp.empty()? cout<<"Yes
": cout<<"No
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