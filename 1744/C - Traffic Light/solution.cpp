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
    ll n,ans=0;
    char c;
    string s;
    cin>>n>>c>>s;
    s+=s;
    n*=2;
    ll temp=-1;
    for(ll i=n-1;i>=0;i--){
        if(s[i]=='g') temp=0;
        else if(temp!=-1)temp++;
        if(s[i]==c){
            ans=max(ans,temp);
        }
    }
    cout<<ans<<"
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
 