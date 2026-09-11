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
    ll n,axor=0,bxor=0;
    cin>>n;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        axor^=a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        bxor^=b[i];
    }
    if(axor==bxor){
        cout<<"Tie
";
        return;
    }
    int i=n-1;
    while(a[i]==b[i]) i--;
    if((i+1)%2==1) cout<<"Ajisai
";
    else cout<<"Mai
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
 