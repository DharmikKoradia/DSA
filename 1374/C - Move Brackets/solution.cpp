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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    int count=0,ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='(') count++;
        else count--;
        if(count<0){
            ans++;
            count=0;
        }
    }
    cout<<ans<<"
";
    return ;
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
 