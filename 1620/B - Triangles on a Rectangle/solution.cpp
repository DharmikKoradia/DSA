#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back;
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
 
void solve()
{
    ll h,w,ans=0;
    cin>>h>>w;
    for(int i=0;i<4;i++){
        ll k,first=-1,last;
        cin>>k;
        
        for(int j=0;j<k;j++){
            cin>>last;
            if(first==-1) first=last;
        }
        
        // cout<<first<<" "<<last<<"
";
        if(i<2) ans=max(ans,(last-first)*w);
        else ans=max(ans,(last-first)*h);
        // cout<<ans<<" ";
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
 
 