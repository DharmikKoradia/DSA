#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define SORT(x) sort(x.begin(),x.end())
#define RSORT(x) sort(x.rbegin(),x.rend())
#define DEBUG(x) cerr<<#x<<" = "<<x;
#define V(x,n) vector<ll> x(n);
 
 
void solve()
{
   string ans="",given;
   int n;
   cin>>n;
   cin>>given;
   
   
   for(char i='a';i<='z';i++){
       if(given.find(i)==string::npos){
           cout<<i<<"
";
           return;
       }
   }
   for(char i='a';i<='z';i++){
       ans+=i;
       for(char j='a';j<='z';j++){
           ans+=j;
           if(given.find(ans)==string::npos){
                cout<<ans<<"
";
                return;
            }
            ans.pop_back();
       }
       ans.pop_back();
   }
   for(char k='a';k<='z';k++){
       ans+=k;
       for(char i='a';i<='z';i++){
           ans+=i;
           for(char j='a';j<='z';j++){
               ans+=j;
               if(given.find(ans)==string::npos){
                    cout<<ans<<"
";
                    return;
                }
                ans.pop_back();
           }
           ans.pop_back();
       }
       ans.pop_back();
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