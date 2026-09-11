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
    ll s,k,m;
    
    cin>>s>>k>>m;
    
    ll flip = m/k;
    
    if(flip%2){
        cout<<max(0ll,min(s,k)-(m%k))<<"
";
    }
    else{
        cout<<max(s-(m%k),0ll)<<"
";
    }
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