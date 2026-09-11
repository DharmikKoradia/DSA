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
   ll l,a,b;
   cin>>l>>a>>b;
   l=l;
   ll ans=a;
   ll temp=a;
   do{
       temp=(temp+b)%l;
       ans=max(temp,ans);
   }
   while(temp!=a);
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
 