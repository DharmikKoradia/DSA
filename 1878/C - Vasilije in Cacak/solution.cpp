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
    ll n,k,x,lowest,highest=0;
    cin>>n>>k>>x;
    lowest=(k*(k+1))/2;
    ll temp=n-k;
    temp=(temp*(temp+1))/2;
    highest=n;
    highest=((n*(n+1))/2)-temp;
    if(x<lowest || x>highest) cout<<"No
";
    else cout<<"Yes
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
 