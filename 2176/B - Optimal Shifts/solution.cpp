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
   ll n,count=0,ans=0;
   cin>>n;
   string s;
   cin>>s;
   s+=s;
   for(int i=0;i<2*n;i++){
       if(s[i]=='0') count++;
       else{
           ans=max(ans,count);
           count=0;
       }
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
 