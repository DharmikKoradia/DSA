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
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,int> f,r;
    for(int i=0;i<n;i++) r[s[i]]++;
    int t1=0,t2=r.size(),ans=0;
    for(int i=0;i<n;i++){
        char curr=s[i];
        f[curr]++;
        if(f[curr]==1) t1++;
        r[curr]--;
        if(r[curr]==0) t2--;
        ans=max(t1+t2,ans);
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
 