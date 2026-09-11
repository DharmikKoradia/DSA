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
    ll a,b;
    cin>>a>>b;
    ll temp=abs(a-b);
    if(temp==0){
        cout<<"0 0
";
        return;
    }
    ll lower_value=min(a,b);
    ll ans=min(lower_value-(temp*(lower_value/temp)),abs(lower_value-(temp*((lower_value/temp)+1))));
    cout<<temp<<" "<<ans<<"
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
 