#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
 
void solve(){
    ll a,b,ans=INT_MAX;
    cin>>a>>b;
    for(int i=0;i<33;i++){
        ll den=b+i;
        if(den==1) continue;
        ll ca=a,temp=i;
        while(ca>0){
            temp++;
            ca/=den;
        }
        ans=min(ans,temp);
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
 