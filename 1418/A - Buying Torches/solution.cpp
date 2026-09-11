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
    ll x,y,k,sub=0;
    cin>>x>>y>>k;
    
    ll sticks_to_coal=y*k;
    ll sticks_req=k+sticks_to_coal-1;
    
    x--;
    
    cout<<(sticks_req+x-1)/x+k-sub<<"
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
 