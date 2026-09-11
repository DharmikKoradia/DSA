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
    int n,b,r;
    cin>>n>>r>>b;
    
    string ans="";
    int group = r/(b+1);
    
    int left=r%(b+1)
    ;
    for(int i=0;i<b+1;i++){
        for(int j=0;j<group;j++) ans+='R';
        if(left-->0) ans+='R';
        if(i!=b) ans+='B';
    }
    
    cout<<ans<<"
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
 