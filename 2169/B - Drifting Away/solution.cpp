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
   string s;
   cin>>s;
   int n=s.size(),ans=0,temp=0;
   bool l=false,r=false;
  
   for(int i=0;i<n;i++){
       if(s[i]=='>') r=true;
       if(s[i]=='<' && r){
           cout<<"-1
";
           return;
       }
       if(i!=0 && s[i-1]=='>' && s[i]=='*'){
           cout<<"-1
";
           return;
       }
       if(i!=n-1){
           if(s[i]=='*' && s[i+1]=='<'){
               cout<<"-1
";
               return;
           }
           if(s[i]=='*' && s[i+1]=='*'){
               cout<<"-1
";
               return;
           }
       }
   }
   
   for(int i=0;i<n;i++){
       if(s[i]=='<' || s[i]=='*') ans++;
   }
   for(int i=n-1;i>=0;i--){
       if(s[i]=='*' || s[i]=='>') temp++;
   }
   cout<<max(temp,ans)<<"
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
 