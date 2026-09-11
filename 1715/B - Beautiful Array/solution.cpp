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
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    ll buffer=(k-1)*n;
    if(s<(b*k) || s>((b*k)+buffer)) cout<<"-1
";
    else{
        cout<<(min(s,(b*k)+(k-1)))<<" ";
        s-=min(s,(b*k)+(k-1));
        for(int i=0;i<n-1;i++){
            cout<<(min(s,(k-1)))<<" ";
            s-=min(s,k-1);
        }
        cout<<"
";
    }
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
 