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
    ll n,s,x;
    cin>>n>>s>>x;
    ll sum=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum+=x;
    }
    
    ((sum<=s) && ((s-sum)%x==0))? cout<<"Yes
":cout<<"No
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