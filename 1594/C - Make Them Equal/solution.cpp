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
   ll n;
   char a;
   string s;
   cin>>n>>a>>s;
   
   unordered_set<int> same;
   
   FOR(i,0,n){
       if(s[i]==a) same.insert(i);
   }
   
   if(same.size()==n){
       cout<<"0
";
       return;
   }
   else{
       for(int i=2;i<=n;i++){
           bool ans=true;
           for(int j=i;j<=n;j+=i){
               if(s[j-1]!=a){
                   ans=false;
                   break;
               }
            }
            if(ans){
                cout<<"1
"<<i<<"
";
                return;
            }
           
       }
       cout<<"2
";
       cout<<n-1<<" "<<n<<"
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