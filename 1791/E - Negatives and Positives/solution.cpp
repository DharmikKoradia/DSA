#include <bits/stdc++.h>
 
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector < int > vi;
#define PB push_back
#define POP pop_back()
#define FOR(i, a, b) for (int i = a; i < b; i++)
    #define DEBUG(x) cerr << #x << " = " << x << "
";
 
void solve()
{
    ll n, ans=0,sub=LLONG_MAX,count=0;
    cin>>n;
    
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        ans+=abs(x);
        if(x<0) count++;
        sub=min(abs(x),sub);
    }
    
    (count%2==1)? cout<<ans-(2*sub):cout<<ans;
    cout<<"
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}