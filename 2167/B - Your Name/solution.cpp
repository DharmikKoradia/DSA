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
    string s,t;
    ll n;
    cin>>n>>s>>t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<<"Yes
";
    else cout<<"No
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
 