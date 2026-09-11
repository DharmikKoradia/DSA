#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define DEBUG(x) cerr<<#x<<" = "<<x;
 
char min_char(char x){
    int temp=x-'0';
    temp=min(9-temp,temp);
    
    return(char)(temp+'0');
}
 
void solve()
{
   string n,ans;
   cin>>n;
   
   if(n[0]=='9') ans='9';
   else ans=min_char(n[0]);
   
   for(int i=1;i<n.size();i++){
       ans+=min_char(n[i]);
   }
   cout<<ans<<"
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--)
    {
	    solve();
    }
}