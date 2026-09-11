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
    unordered_map<ll,ll> a,b;
    vector<ll> n1(n),n2(n);
    for(int i=0;i<n;i++) cin>>n1[i];
    for(int i=0;i<n;i++) cin>>n2[i];
    
    ll c1=1,c2=1;
    for(int i=1;i<n;i++){
        if(n1[i]==n1[i-1]) c1++;
        else{
            a[n1[i-1]]=max(a[n1[i-1]],c1);
            c1=1;
        }
        if(n2[i]==n2[i-1]) c2++;
        else{
            b[n2[i-1]]=max(b[n2[i-1]],c2);
            c2=1;
        }
    }
    a[n1[n-1]]=max(a[n1[n-1]],c1);
    b[n2[n-1]]=max(b[n2[n-1]],c2);
    
    ll ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,a[n1[i]]+b[n1[i]]);
        ans=max(ans,a[n2[i]]+b[n2[i]]);
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
 