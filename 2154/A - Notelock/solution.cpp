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
    int n,k,ans=0;
    int count=0;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='1' && count<=0){
            ans++;
            count=k-1;
        }
        else if(s[i]=='1'){
            count=k-1;
        }
        else count--;
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
 