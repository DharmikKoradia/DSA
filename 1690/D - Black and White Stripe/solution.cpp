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
    int n,k,ans=INT_MAX,count=0;
    cin>>n>>k;
    string s;
    cin>>s;
    int l=0,r=0;
    while(r<n){
        if(s[r]=='W') count++;
        if(r-l+1==k){
            ans=min(ans,count);
            if(s[l++]=='W') count--;
        }
        r++;
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
 