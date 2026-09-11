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
    ll n;
    cin>>n;
    string ans,temp;
    cin>>ans;
    for(int i=1;i<n;i++){
        cin>>temp;
        if(temp+ans < ans+temp) ans=temp+ans;
        else ans=ans+temp;
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