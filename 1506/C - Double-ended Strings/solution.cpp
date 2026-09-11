#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
 
ll give_ans(string a,string b){
    ll ans=0;
    ll n=a.size();
   for(int i=0;i<n;i++){
       ll j=ans+1;
       for(j;i+j<=n;j++){
           string to_be_found=a.substr(i,j);
           if(b.find(to_be_found)!=string::npos) ans=max(ans,j);
       }
   } 
   return ans;
}
void solve()
{
    string a,b;
    cin>>a>>b;
    ll string_size,t1=a.size(),t2=b.size();
    if(t1<t2) string_size=give_ans(a,b);
    else string_size=give_ans(b,a);
    
    cout<<(t1+t2)-(2*string_size)<<"
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
 